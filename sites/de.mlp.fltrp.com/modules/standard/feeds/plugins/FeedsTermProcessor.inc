<?php

/**
 * @file
 * FeedsTermProcessor class.
 */

/**
 * Feeds processor plugin. Create taxonomy terms from feed items.
 */
class FeedsTermProcessor extends FeedsProcessor {
  /**
   * Define entity type.
   */
  public function entityType() {
    return 'taxonomy_term';
  }

  /**
   * Implements parent::entityInfo().
   */
  protected function entityInfo() {
    $info = parent::entityInfo();
    $info['label plural'] = t('Terms');
    return $info;
  }

  /**
   * Creates a new term in memory and returns it.
   */
  protected function newEntity(FeedsSource $source) {
    $vocabulary = $this->vocabulary();
    $term = new stdClass();
    $term->vid = $vocabulary->vid;
    $term->vocabulary_machine_name = $vocabulary->machine_name;
    return $term;
  }

  /**
   * Loads an existing term.
   */
  protected function entityLoad(FeedsSource $source, $tid) {
    return taxonomy_term_load($tid);
  }

  /**
   * Validates a term.
   */
  protected function entityValidate($term) {
    if (empty($term->name)) {
      throw new FeedsValidationException(t('Term name missing.'));
    }
  }

  /**
   * Saves a term.
   */
  protected function entitySave($term) {
    taxonomy_term_save($term);
  }

  /**
   * Deletes a series of terms.
   */
  protected function entityDeleteMultiple($tids) {
    foreach ($tids as $tid) {
      taxonomy_term_delete($tid);
    }
  }

  /**
   * Override parent::configDefaults().
   */
  public function configDefaults() {
    return array(
      'vocabulary' => 0,
    ) + parent::configDefaults();
  }

  /**
   * Override parent::configForm().
   */
  public function configForm(&$form_state) {
    $options = array(0 => t('Select a vocabulary'));
    foreach (taxonomy_get_vocabularies() as $vocab) {
      $options[$vocab->machine_name] = check_plain($vocab->name);
    }
    $form = parent::configForm($form_state);
    $form['vocabulary'] = array(
      '#type' => 'select',
      '#title' => t('Import to vocabulary'),
      '#description' => t('Choose the vocabulary to import into. <strong>CAUTION:</strong> when deleting terms through the "Delete items" tab, Feeds will delete <em>all</em> terms from this vocabulary.'),
      '#options' => $options,
      '#default_value' => $this->config['vocabulary'],
    );
    return $form;
  }

  /**
   * Override parent::configFormValidate().
   */
  public function configFormValidate(&$values) {
    if (empty($values['vocabulary'])) {
      form_set_error('vocabulary', t('Choose a vocabulary'));
    }
  }
   /**
   * Override setTargetElement to operate on a target item that is a term.
   */
  public function setTargetElement(FeedsSource $source, $target_node, $target_element, $value) {
    switch ($target_element) {
      case 'parent':      
        if (!empty($value)) {
          $terms = taxonomy_get_term_by_name($value);
          $parent_tid = '';
          foreach ($terms as $term) {
            if ($term->vid == $target_node->vid) {
              $parent_tid = $term->tid;
            }
          }
          
          if (!empty($parent_tid)) {
            $target_node->parent = $parent_tid;
          }
          else {
					   $term = new stdClass();
				     $term->vid = $target_node->vid;
				     $term->name = $value;
			       $status = taxonomy_term_save($term);
				     $tid = $term->tid;
						 $target_node->parent = $tid;
            //$target_node->parent = 0;
          }
        }
        else {
          $target_node->parent = 0;
        }        

        break;
      case 'weight':
        if (!empty($value)) {
          $weight = intval($value);
        }
        else {
          $weight = 0;
        }
        $target_node->weight = $weight;

        break;        
      default:
        parent::setTargetElement($source, $target_node, $target_element, $value);
        break;
    }
  }
  /**
   * Return available mapping targets.
   */
  public function getMappingTargets() {
    $targets = parent::getMappingTargets();
    $targets += array(
      'name' => array(
        'name' => t('Term name'),
        'description' => t('Name of the taxonomy term.'),
        'optional_unique' => TRUE,
       ),
      'description' => array(
        'name' => t('Term description'),
        'description' => t('Description of the taxonomy term.'),
       ),
      'parent' => array(
        'name' => t('Parent Term Name'),
        'description' => t('Name of the Parent Term.'),
        'optional_unique' => TRUE,
       ), 
      'weight' => array(
        'name' => t('Term Weight'),
        'description' => t('Weight of the Term.'),
        'optional_unique' => TRUE,
       ),    
    );
    // Let implementers of hook_feeds_term_processor_targets() add their targets.
    try {
      self::loadMappers();
      feeds_alter('feeds_processor_targets', $targets, 'taxonomy_term', $this->vocabulary()->machine_name);
    }
    catch (Exception $e) {
      // Do nothing.
    }
    return $targets;
  }

  /**
   * Get id of an existing feed item term if available.
   */
  protected function existingEntityId(FeedsSource $source, FeedsParserResult $result) {
    if ($tid = parent::existingEntityId($source, $result)) {
      return $tid;
    }

    // The only possible unique target is name.
    foreach ($this->uniqueTargets($source, $result) as $target => $value) {
      if ($target == 'name') {
        $vocabulary = $this->vocabulary();
        if ($tid = db_query("SELECT tid FROM {taxonomy_term_data} WHERE name = :name AND vid = :vid", array(':name' => $value, ':vid' => $vocabulary->vid))->fetchField()) {
          return $tid;
        }
      }
    }
    return 0;
  }

  /**
   * Return vocabulary to map to.
   */
  public function vocabulary() {
    if (isset($this->config['vocabulary'])) {
      if ($vocabulary = taxonomy_vocabulary_machine_name_load($this->config['vocabulary'])) {
        return $vocabulary;
      }
    }
    throw new Exception(t('No vocabulary defined for Taxonomy Term processor.'));
  }
}

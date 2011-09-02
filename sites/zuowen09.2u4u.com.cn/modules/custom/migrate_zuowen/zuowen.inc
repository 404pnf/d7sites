<?php

/**
 * To define a migration process from a set of source data to a particular
 * kind of Drupal object (for example, a specific node type), you define
 * a class derived from Migration. You must define a constructor to initialize
 * your migration object. By default, your class name will be the "machine name"
 * of the migration, by which you refer to it. Note that the machine name is
 * case-sensitive.
 * 中文
 * In any serious migration project, you will find there are some options
 * which are common to the individual migrations you're implementing. You can
 * define an abstract intermediate class derived from Migration, then derive your
 * individual migrations from that, to share settings, utility functions, etc.
 */
abstract class BasicZuowenMigration extends Migration {
  public function __construct() {
    // Always call the parent constructor first for basic setup
    parent::__construct();

    // With migrate_ui enabled, migration pages will indicate people involved in
    // the particular migration, with their role and contact info. We default the
    // list in the shared class; it can be overridden for specific migrations.
    $this->team = array(
      new MigrateTeamMember('xiao bai', 'xiaobai@example.com', t('Product Owner')),
      new MigrateTeamMember('laoge', 'laoge@example.com', t('Implementor')),
    );

    // Individual mappings in a migration can be linked to a ticket or issue
    // in an external tracking system. Define the URL pattern here in the shared
    // class with ':id:' representing the position of the issue number, then add
    // ->issueNumber(1234) to a mapping.
    $this->issuePattern = 'http://drupal.org/node/:id:';
  }
}

class FltrpZuowenNodeMigration extends BasicZuowenMigration {
  public function __construct() {
    parent::__construct();
    $this->description = t('Fltrp Zuowen');

    // You may optionally declare dependencies for your migration - other migrations
    // which should run first. In this case, terms assigned to our nodes and
    // the authors of the nodes should be migrated before the nodes themselves.
    //$this->dependencies = array('BeerTerm', 'BeerUser');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'nid' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Zuowen ID.',
          'alias' => 'nid',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );
		$types= array('zuowen_ziyou_shangchuan','zuowen_shida_xieshou','zuowen_cansai');
		
		$query = Database::getConnection('default', 'zuowen2')
		->select('node', 'n')
    ->fields('n', array('nid', 'vid', 'type', 'language', 'title', 'uid', 'status', 'created', 'changed', 'comment', 'promote', 'moderate', 'sticky', 'tnid', 'translate'))
	  //->leftJoin('term_hierarchy', 'th', 'td.tid = th.tid')
		//->leftJoin('term_data', 'tdp', 'th.parent = tdp.tid')
		//->addField('tdp', 'name', 'parent_name')
		//->condition('n.type', 'zuowen_ziyou_shangchuan', '=')
		//->condition('n.nid', 4000, '<')
		->condition('n.type', $types, 'IN');
		

    //$this->source = new MigrateSourceCSV(drupal_get_path('module', 'migrate_fltrp').'/books.csv', $this->csvcolumns(), array(), $this->fields());
   // $this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => TRUE));
		$this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));
    // Set up our destination - nodes of type migrate_example_beer
    //$this->destination = new MigrateDestinationNode('book');
		 $this->destination = new MigrateDestinationNode('zuowen');

    // Mapped fields
    $this->addFieldMapping('title', 'title')
         ->description(t('Mapping zuowen title in source to node title'));
		$this->addFieldMapping('field_school', 'school')
         ->description(t('Mapping zuowen title in source to node title'));
	  $this->addFieldMapping('field_name', 'name')
         ->description(t('Mapping zuowen title in source to node title'));
		$this->addFieldMapping('field_area', 'area')
         ->description(t('Mapping zuowen title in source to node title'));
		$this->addFieldMapping('field_phone', 'phone')
         ->description(t('Mapping zuowen title in source to node title'));
    $this->addFieldMapping('sticky')
         ->description(t('Should we default this to 0 or 1?'))
         ->issueGroup(t('Client questions'))
         ->issueNumber(765736)
         ->issuePriority(MigrateFieldMapping::ISSUE_PRIORITY_LOW);
				 

		$this->addFieldMapping('field_article_type', 'article_type')
         ->description(t('Mapping article_type in source to article_type'));
		$this->addFieldMapping('field_tongguo', 'tongguo')
         ->description(t('Mapping tongguo in source to node tongguo'));

    // To maintain node identities between the old and new systems (i.e., have
    // the same unique IDs), map the ID column from the old system to nid and
    // set is_new to TRUE.
    $this->addFieldMapping('nid', 'nid')
         ->description(t('Preserve old beer ID as nid in Drupal'));
    $this->addFieldMapping('is_new')
         ->defaultValue(TRUE);


    // Drupal 7 fields can have attributes such as text formats, or excerpts
    // (equivalent to teasers in previous Drupal versions).
    // The source_field argument specifies what field in the source query maps
    // to the corresponding attribute (excerpt in this case)
    $arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'body'));
    $this->addFieldMapping('body','body')
         ->arguments($arguments);

		
		//$this->addFieldMapping('img', 'bsno');
		//$arguments = MigrateFileFieldHandler::arguments(drupal_get_path('module', 'migrate_fltrp').'/qikanimg', 'file_copy', FILE_EXISTS_RENAME);
    //$this->addFieldMapping('field_img', 'img')
     //    ->arguments($arguments);


    // Oops, we've added a second mapping for sticky... Fortunately, the
    // Migrate module will warn you that the second mapping overrides the first
    $this->addFieldMapping('sticky','sticky')
         ->defaultValue(0);

    // No unmapped source fields
    //$this->addFieldMapping('img1', 'img1');
         //->issueGroup(t('DNM'));
				 
    // Unmapped destination fields
		$this->addFieldMapping('uid')
         ->defaultValue(1);
    $this->addFieldMapping('name')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('created','created')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('changed','changed')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('status','status')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('promote','promote')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('revision')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('language','language')
         ->issueGroup(t('DNM'));
  }
	function prepareRow($row) {
	  //$row->words = empty($row->words)? 0 : intval($row->words);
		$row->name = getFieldValueByName(8, $row->uid);  // 8是profile_fields中的字段ID
		$school_id = get_school_id_by_nid($row->nid);
		
		$area_id = get_area_id_by_school_id($school_id);
		$row->area =get_area_name_by_area_id($area_id);  // 2是profile_fields中的字段ID
		
		$row->school =get_school_name_by_id($school_id);  // 3是profile_fields中的字段ID
		$row->school = getTidByName($row->school,2);
		
		$row->phone = getFieldValueByName(6, $row->uid).' , ';  // 3是profile_fields中的字段ID
		$row->phone .= getFieldValueByName(7, $row->uid);  // 3是profile_fields中的字段ID
		
		$row->body = getBodyValueByVid($row->vid);
		
		$row->article_type = get_type_name_by_machine_name($row->type);
		
		$row->tongguo = get_tongguo_by_nid($row->nid);
	}
	
	function fields() {
    return array(
      'school' => 'A composite field made during prepareRow().',
			'name' => 'A composite field made during prepareRow().',
			'area' => 'A composite field made during prepareRow().',
			'phone' => 'A composite field made during prepareRow().',
			'body' => 'A composite field made during prepareRow().',
			'article_type' => 'A composite field made during prepareRow().',
			'tongguo' => 'A composite field made during prepareRow().',
    );
  }
}

function getFieldValueByName($fid, $uid){
  $record = Database::getConnection('default', 'zuowen2')
	->select('profile_values', 'pv')
	->fields('pv', array('fid', 'uid', 'value'))
	->condition('pv.fid', $fid, '=')
	->condition('pv.uid', $uid, '=')
	->execute()
	->fetchAssoc();  
	return isset($record['value'])?$record['value']:"";
}
function getBodyValueByVid($vid){
  $record = Database::getConnection('default', 'zuowen2')
	->select('node_revisions', 'nr')
	->fields('nr', array('vid', 'body'))
	->condition('nr.vid', $vid, '=')
	->execute()
	->fetchAssoc();  
	return isset($record['body'])?$record['body']:"";
}

function get_school_id_by_nid($nid){
  $record = Database::getConnection('default', 'zuowen2')
	->select('og_ancestry', 'oa')
	->fields('oa', array('nid', 'group_nid'))
	->condition('oa.nid', $nid, '=')
	->execute()
	->fetchAssoc();  
	return isset($record['group_nid'])?$record['group_nid']:"";
}

function get_school_name_by_id($school_id){
  $record = Database::getConnection('default', 'zuowen2')
	->select('og', 'o')
	->fields('o', array('nid', 'og_description'))
	->condition('o.nid', $school_id, '=')
	->execute()
	->fetchAssoc();  
	return isset($record['og_description'])?$record['og_description']:"";
}

function get_area_id_by_school_id($school_id){
  $record = Database::getConnection('default', 'zuowen2')
	->select('term_node', 'tn')
	->fields('tn', array('nid', 'tid'))
	->condition('tn.nid', $school_id, '=')
	->execute()
	->fetchAssoc();  
	return isset($record['tid'])?$record['tid']:"";
}

function get_area_name_by_area_id($area_id){
  $record = Database::getConnection('default', 'zuowen2')
	->select('term_data', 'td')
	->fields('td', array('tid', 'name'))
	->condition('td.tid', $area_id, '=')
	->execute()
	->fetchAssoc();  
	return isset($record['name'])?$record['name']:"";
}

function get_type_name_by_machine_name($machine_name){
  $record = Database::getConnection('default', 'zuowen2')
	->select('node_type', 'nt')
	->fields('nt', array('type', 'name'))
	->condition('nt.type', $machine_name, '=')
	->execute()
	->fetchAssoc();  
	return isset($record['name'])?$record['name']:"";
}

function get_tongguo_by_nid($nid){
  $count = Database::getConnection('default', 'zuowen2')
	->select('flag_content', 'fc')
	//->fields('fc', array('fcid'))
	->condition('fc.fid', 3, '=')      //3表示进入复赛的flag
	->condition('fc.content_type', 'node', '=')
	->condition('fc.content_id', $nid, '=')
	->countQuery()
	->execute()
	->fetchField();  
	$flag = 0;
	if($count>0){
	  $flag = 1;
	}
	return $flag;
}

function getTidByName($tname, $vid){
  if(empty($tname)){
	  return;
	}else{
	    $tids = db_select('taxonomy_term_data', 'td')
        ->fields('td', array('tid'))
        ->condition('td.name', trim($tname), '=')
        ->condition('td.vid', $vid)
        ->execute()
        ->fetchAllKeyed(0, 0);
			if(empty($tids)){
			   $term = new stdClass();
				 $term->vid = $vid;
				 $term->name = $tname;
			   $status = taxonomy_term_save($term);
			}
	}
	return $tname;
}
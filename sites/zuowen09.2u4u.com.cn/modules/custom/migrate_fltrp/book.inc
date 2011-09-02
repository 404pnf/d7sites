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
abstract class BasicFltrpMigration extends Migration {
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

class FltrpBookNodeMigration extends BasicFltrpMigration {
  public function __construct() {
    parent::__construct();
    $this->description = t('Fltrp Book');

    // You may optionally declare dependencies for your migration - other migrations
    // which should run first. In this case, terms assigned to our nodes and
    // the authors of the nodes should be migrated before the nodes themselves.
    //$this->dependencies = array('BeerTerm', 'BeerUser');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'bsno' => array(
          'type' => 'int',
          'not null' => TRUE,
          'description' => 'Book ID.',
          'alias' => 'b',
        )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'migrate_fltrp').'/books.csv', $this->csvcolumns(), array(), $this->fields());

    // Set up our destination - nodes of type migrate_example_beer
    $this->destination = new MigrateDestinationNode('book');

    // Mapped fields
    $this->addFieldMapping('title', 'title')
         ->description(t('Mapping book title in source to node title'));
    $this->addFieldMapping('sticky')
         ->description(t('Should we default this to 0 or 1?'))
         ->issueGroup(t('Client questions'))
         ->issueNumber(765736)
         ->issuePriority(MigrateFieldMapping::ISSUE_PRIORITY_LOW);

    // To maintain node identities between the old and new systems (i.e., have
    // the same unique IDs), map the ID column from the old system to nid and
    // set is_new to TRUE.
    //$this->addFieldMapping('nid', 'bid')
        // ->description(t('Preserve old beer ID as nid in Drupal'));
    //$this->addFieldMapping('is_new')
        // ->defaultValue(TRUE);

    // References to related objects (such as the author of the content) are
    // most likely going to be identifiers from the source data, not Drupal
    // identifiers (such as uids). You can use the mapping from the relevant
    // migration to translate from the old ID to the Drupal identifier.
    // Note that we also provide a default value of 1 - if the lookup fails to
    // find a corresponding uid for the aid, the owner will be the administrative
    // account.
  

    // This is a multi-value text field
   // $this->addFieldMapping('field_migrate_example_country', 'countries')
      //   ->separator('|');
    // These are related terms, which by default will be looked up by name
   // $this->addFieldMapping('migrate_example_beer_styles', 'terms')
        // ->separator(',');

    // Drupal 7 fields can have attributes such as text formats, or excerpts
    // (equivalent to teasers in previous Drupal versions).
    // The source_field argument specifies what field in the source query maps
    // to the corresponding attribute (excerpt in this case)
    $arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'body'));
    $this->addFieldMapping('body', 'body')
         ->arguments($arguments);
    // Since the excerpt is mapped via an argument, add a null mapping so it's
    // not flagged as unmapped
    //$this->addFieldMapping(NULL, 'excerpt');
		
		$this->addFieldMapping('field_bsno', 'bsno');
		$this->addFieldMapping('field_isbn', 'isbn');
		$this->addFieldMapping('field_series_name', 'series_name');
		$this->addFieldMapping('field_price', 'price');
		$this->addFieldMapping('field_publish_date', 'publish_date');
		$this->addFieldMapping('field_author', 'author');
		$this->addFieldMapping('field_directory', 'directory');
		$this->addFieldMapping('field_author_info', 'author_info');
		
		$this->addFieldMapping('field_format', 'format');
		$this->addFieldMapping('field_pages', 'pages');
		$this->addFieldMapping('field_words', 'words');
		$this->addFieldMapping('field_edition', 'edition');
		
		$this->addFieldMapping('field_bookbinding', 'bookbinding');
		$this->addFieldMapping('field_sample', 'sample');
		$this->addFieldMapping('field_reader', 'reader');
		
		//$this->addFieldMapping('img', 'bsno');
		$arguments = MigrateFileFieldHandler::arguments(drupal_get_path('module', 'migrate_fltrp').'/qikanimg', 'file_copy', FILE_EXISTS_RENAME);
    $this->addFieldMapping('field_img', 'img')
         ->arguments($arguments);


    // Oops, we've added a second mapping for sticky... Fortunately, the
    // Migrate module will warn you that the second mapping overrides the first
    $this->addFieldMapping('sticky')
         ->defaultValue(0);

    // No unmapped source fields
    $this->addFieldMapping('img1', 'img1');
         //->issueGroup(t('DNM'));
				 
    // Unmapped destination fields
		$this->addFieldMapping('uid')
         ->defaultValue(1);
    $this->addFieldMapping('name')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('created')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('changed')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('status')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('promote')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('revision')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('language')
         ->issueGroup(t('DNM'));
  }
	
	function csvcolumns() {
    // Note: Remember to subtract 1 from column number at http://www.retrosheet.org/gamelogs/glfields.txt
    $columns[0] = array('bsno', 'Bsno');
    $columns[1] = array('isbn', 'isbn');
    $columns[2] = array('series_name', 'series name');
    $columns[3] = array('title', 'Home team game number');
    $columns[4] = array('img1', 'img1');
    $columns[5] = array('price', 'price');
    $columns[6] = array('publish_date', 'publish_date');
    $columns[7] = array('author', 'author');
    $columns[8] = array('body', 'body');
    $columns[9] = array('directory', 'directory');
		$columns[10] = array('author_info', 'author info');
		$columns[11] = array('format', 'format');
		$columns[12] = array('pages', 'pages');
		$columns[13] = array('words', 'words');
		$columns[14] = array('edition', 'edition');
		$columns[15] = array('bookbinding', 'bookbinding');
		$columns[16] = array('sample', 'sample');
		$columns[17] = array('readers', 'readers');

    return $columns;
  }
  
  function prepareRow($row) {
    $row->img = $row->bsno . '.jpg';
		$row->words = empty($row->words)? 0 : intval($row->words);
		$row->pages = empty($row->pages)? 0 : intval($row->pages);
  }
  
  /**
   * Construct the machine name from the source file name.
   *//*
  protected function generateMachineName($class_name = NULL) {
    return strtolower(pathinfo($this->arguments['source_file'], PATHINFO_FILENAME));  
  }
	*/
  
  function fields() {
    return array(
      'img' => 'A composite field made during prepareRow().',
    );
  }
}
class FltrpBookTermMigration extends BasicFltrpMigration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you
    // like.
    $this->description = t('Migrate book class from the source database to taxonomy terms');

    // Create a map object for tracking the relationships between source rows
    // and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
    // class, which uses database tables for tracking. Pass the machine name
    // (BeerTerm) of this migration to use in generating map and message tables.
    // And, pass schema definitions for the primary keys of the source and
    // destination - we need to be explicit for our source, but the destination
    // class knows its schema already.
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'tid' => array('type' => 'int',
                           'unsigned' => TRUE,
                           'not null' => TRUE,
                           'description' => 'ID of source term',
                          )
        ),
        MigrateDestinationTerm::getKeySchema()
      );

    // We are getting data from tables in the Drupal default database - first,
    // set up a query for this data.
		/*
    $query = Database::getConnection('default', 'drupal6')
		->select('term_data', 'td')
             ->fields('td', array('name', 'description', 'weight', 'tid', 'vid'))
						 //->leftJoin('term_hierarchy', 'th', 'td.tid = th.tid')
						 //->leftJoin('term_data', 'tdp', 'th.parent = tdp.tid')
						 //->addField('tdp', 'name', 'parent_name')
						 ->condition('td.vid', 8, '=')
						 
             // This sort assures that parents are saved before children.
             ->orderBy('td.tid', 'ASC');
						 */
		 $query = db_select('term_data', 'td')
             ->fields('td', array('name', 'description', 'weight', 'tid', 'vid'))
						 //->leftJoin('term_hierarchy', 'th', 'td.tid = th.tid')
						 //->leftJoin('term_data', 'tdp', 'th.parent = tdp.tid')
						 //->addField('tdp', 'name', 'parent_name')
						 ->condition('td.vid', 8, '=')
						 
             // This sort assures that parents are saved before children.
             ->orderBy('td.tid', 'ASC');
		//$query->leftJoin('term_hierarchy', 'th', 'td.tid = th.tid');
		//$query->leftJoin('term_data', 'tdp', 'th.parent = tdp.tid');
		//$query->addField('tdp', 'name', 'parent_name');
		//$query->condition('td.vid', 8, '=');
		//$query->orderBy('td.tid', 'ASC');
	/*					 
		$sql = "select td.tid, td.name, td.description, td.weight, tdp.name as parent_name
FROM term_data td 
LEFT JOIN term_hierarchy th 
ON td.tid = th.tid
LEFT JOIN term_data tdp
ON th.parent = tdp.tid
WHERE td.vid = :vid";
    $query = Database::getConnection('default', 'drupal6')->query($sql,array(':vid' => 8));
*/
/*
		 $count_query = Database::getConnection('default', 'drupal6')      
		 ->select('term_data', 'td')
		 ->condition('td.vid', 8, '=');    
		 
		 $count_query->addExpression('COUNT(tid)', 'cnt');
			*/			 
    // Create a MigrateSource object, which manages retrieving the input data.
   // $this->source = new MigrateSourceSQL($query);
		$this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => TRUE));

    // Set up our destination - terms in the migrate_example_beer_styles vocabulary
    $this->destination = new MigrateDestinationTerm('fltrp_book_term');

    // Assign mappings TO destination fields FROM source fields. To discover
    // the names used in these calls, use the drush commands
    // drush migrate-fields-destination BeerTerm
    // drush migrate-fields-source BeerTerm
    $this->addFieldMapping('name', 'name');
    $this->addFieldMapping('description', 'description');

    // Documenting your mappings makes it easier for the whole team to see
    // exactly what the status is when developing a migration process.
    $this->addFieldMapping('parent_name')
         ->description(t('The incoming parent_name field is the name of the term parent'));

    // Mappings are assigned issue groups, by which they are grouped on the
    // migration info page when the migrate_ui module is enabled. The default
    // is 'Done', indicating active mappings which need no attention. A
    // suggested practice is to use groups of:
    // Do Not Migrate (or DNM) to indicate source fields which are not being used,
    //  or destination fields not to be populated by migration.
    // Client Issues to indicate input from the client is needed to determine
    //  how a given field is to be migrated.
    // Implementor Issues to indicate that the client has provided all the
    //  necessary information, and now the implementor needs to complete the work.
    //$this->addFieldMapping(NULL, 'hoppiness')
       //  ->description(t('This info will not be maintained in Drupal'))
       //  ->issueGroup(t('DNM'));

    // Open mapping issues can be assigned priorities (the default is
    // MigrateFieldMapping::ISSUE_PRIORITY_OK). If you're using an issue
    // tracking system, and have defined issuePattern (see BasicExampleMigration
    // above), you can specify a ticket/issue number in the system on the
    // mapping and migrate_ui will link directory to it.
    //$this->addFieldMapping(NULL, 'region')
     //    ->description('Will a field be added to the vocabulary for this?')
     //    ->issueGroup(t('Client Issues'))
     //   ->issuePriority(MigrateFieldMapping::ISSUE_PRIORITY_MEDIUM)
      //   ->issueNumber(770064);

    // It is good practice to account for all source and destination fields
    // explicitly - this makes sure that everyone understands exactly what is
    // being migrated and what is not. Also, migrate_ui highlights unmapped
    // fields, or mappings involving fields not in the source and destination,
    // so if (for example) a new field is added to the destination field it's
    // immediately visible, and you can find out if anything needs to be
    // migrated into it.
    $this->addFieldMapping('format')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('weight')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('parent')
         ->issueGroup(t('DNM'));
  }
}
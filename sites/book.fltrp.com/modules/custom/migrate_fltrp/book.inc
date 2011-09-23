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
		Database::getConnection('default', 'data1')->query('set names latin1');
    $query = Database::getConnection('default', 'data1')
		//$query = Database::getConnection('default', 'data');
	//	$query->query('set names latin1');
		->select('qrybooks', 'q')
    ->fields('q', array('bsno', 'bname', 'ebname', 'materielno', 'isbn', 'writer', 'bianshi', 'yc', 'price', 'zs',
		   'ys', 'publishdate', 'inputdate', 'zdfs', 'kb', 'ekb', 'type', 'dzdx','features','relativeinfo',
			 'authorizationdetails','isimportant','isrecommended','authorization','saleoversea','categoryrecommended','accessories'));
	  //->leftJoin('term_hierarchy', 'th', 'td.tid = th.tid')
		//->leftJoin('term_data', 'tdp', 'th.parent = tdp.tid')
		//->addField('tdp', 'name', 'parent_name')
		//->condition('q.bsno', 1000, '<');
    //$this->source = new MigrateSourceCSV(drupal_get_path('module', 'migrate_fltrp').'/books.csv', $this->csvcolumns(), array(), $this->fields()); 
		$this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));

    // Set up our destination - nodes of type migrate_example_beer
    $this->destination = new MigrateDestinationNode('book');

    // Mapped fields
    $this->addFieldMapping('title', 'bname')
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
    $arguments = MigrateTextFieldHandler::arguments(array('source_field' => 'nrty'));
    $this->addFieldMapping('body', 'nrty')
         ->arguments($arguments);
    // Since the excerpt is mapped via an argument, add a null mapping so it's
    // not flagged as unmapped
    //$this->addFieldMapping(NULL, 'excerpt');
		
		$this->addFieldMapping('field_bsno', 'bsno');
		$this->addFieldMapping('field_isbn', 'isbn');
		
		$this->addFieldMapping('field_price', 'price');
		$this->addFieldMapping('field_publish_date', 'publishdate');
		$this->addFieldMapping('field_author', 'writer');
		$this->addFieldMapping('field_directory', 'zjml');
		$this->addFieldMapping('field_author_info', 'zzjj');
		
		$this->addFieldMapping('field_format', 'kb');
		$this->addFieldMapping('field_pages', 'ys');
		$this->addFieldMapping('field_words', 'zs');
		
		$this->addFieldMapping('field_sample', 'jcpd');
		$this->addFieldMapping('field_readers', 'dzdx');
		
		$this->addFieldMapping('field_ebname', 'ebname');
		$this->addFieldMapping('field_materielno', 'materielno');
		$this->addFieldMapping('field_bianshi', 'bianshi');
		$this->addFieldMapping('field_yc', 'yc');
		$this->addFieldMapping('field_inputdate', 'inputdate');
		
		$this->addFieldMapping('field_ekb', 'ekb');
		$this->addFieldMapping('field_type', 'type');
		$this->addFieldMapping('field_preface', 'preface');
		$this->addFieldMapping('field_sp', 'sp');
		
		
		$this->addFieldMapping('field_zdfs', 'zdfs');
		
		$this->addFieldMapping('field_features', 'features');
		$this->addFieldMapping('field_relative_info', 'relativeinfo');
		$this->addFieldMapping('field_authorization_details', 'authorizationdetails');
		$this->addFieldMapping('field_is_important', 'isimportant');
		$this->addFieldMapping('field_is_recommended', 'isrecommended');
		$this->addFieldMapping('field_authorization', 'authorization');
		$this->addFieldMapping('field_saleoversea', 'saleoversea');
		$this->addFieldMapping('field_category_recommended', 'categoryrecommended');
		$this->addFieldMapping('field_accessories', 'accessories');
		
					
		
		
		//$this->addFieldMapping('img', 'bsno');
		//$arguments = MigrateFileFieldHandler::arguments(drupal_get_path('module', 'migrate_fltrp').'/bookimages', 'file_copy', FILE_EXISTS_RENAME);
    $arguments = MigrateFileFieldHandler::arguments('http://www.fltrp.com/bookimages/big', 'file_copy', FILE_EXISTS_RENAME);
    
		$this->addFieldMapping('field_img', 'img')
         ->arguments($arguments);


    // Oops, we've added a second mapping for sticky... Fortunately, the
    // Migrate module will warn you that the second mapping overrides the first
    $this->addFieldMapping('sticky')
         ->defaultValue(0);
				 
    $this->addFieldMapping('field_series_name')
		->issueGroup(t('DNM')); // 目前无，需要新建
    // No unmapped source fields
    $this->addFieldMapping('img1')
		->issueGroup(t('DNM'));   //没有这个字段
         //->issueGroup(t('DNM'));
				
    $this->addFieldMapping('field_language')
		->issueGroup(t('DNM'));  //没有这个字段			
    $this->addFieldMapping('field_edition')
		->issueGroup(t('DNM'));   //没有这个字段
		
		$this->addFieldMapping('field_bookbinding')
		->issueGroup(t('DNM'));  //没有这个字段		
		
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
	  
  function prepareRow($row) {
    $row->img = $row->bsno . '.jpg';
		
		$row->words = empty($row->words)? 0 : intval($row->words);
		$row->pages = empty($row->pages)? 0 : intval($row->pages);
		
		//$encode = mb_detect_encoding($row->bname, array("ASCII","GB2312","GBK","UTF-8","BIG5"));
    //$encode = mb_detect_encoding($row->bname);		
		//$row->bname = iconv('',"UTF-8//IGNORE",$row->bname) ; //iconv转换
		$row->bname = iconv('EUC-CN',"UTF-8//IGNORE",$row->bname) ; //iconv转换
		$row->ebname = iconv('EUC-CN',"UTF-8//IGNORE",$row->ebname) ; //iconv转换
		$row->writer = iconv('EUC-CN',"UTF-8//IGNORE",$row->writer); //iconv转换
    $row->bianshi = iconv('EUC-CN',"UTF-8//IGNORE",$row->bianshi); //iconv转换
		$row->dzdx = iconv('EUC-CN',"UTF-8//IGNORE",$row->dzdx); //iconv转换
		$row->kb = iconv('EUC-CN',"UTF-8//IGNORE",$row->kb); //iconv转换
		$row->zdfs = iconv('EUC-CN',"UTF-8//IGNORE",$row->zdfs); //iconv转换
		
		$row->features = iconv('EUC-CN',"UTF-8//IGNORE",$row->features); //iconv转换
		$row->relativeinfo = iconv('EUC-CN',"UTF-8//IGNORE",$row->relativeinfo); //iconv转换
		$row->authorizationdetails = iconv('EUC-CN',"UTF-8//IGNORE",$row->authorizationdetails); //iconv转换
		$row->accessories = iconv('EUC-CN',"UTF-8//IGNORE",$row->accessories); //iconv转换
		
		$row->isimportant = empty($row->isimportant) ? 0 : 1;
		$row->isrecommended = empty($row->isrecommended) ? 0 : 1;
		$row->authorization = empty($row->authorization) ? 0 : 1;
		$row->saleoversea = empty($row->saleoversea) ? 0 : 1;
		$row->categoryrecommended = empty($row->categoryrecommended) ? 0 : 1;
		
		
		$row->inputdate = $row->inputdate; //iconv转换
		 
		//$path=drupal_get_path('module', 'migrate_fltrp');
	  //$path=$path.'/bookext/'.$row->bsno;
		$path='http://www.fltrp.com/bookext/'.$row->bsno;
    $row->type = getTidByName($row->type,10);
		$row->zdfs = getTidByName($row->zdfs,11);
		$row->bianshi = getTidByName($row->bianshi,6);
		$row->kb = getTidByName($row->kb,7);
		$row->dzdx = getTidByName($row->dzdx, 9);
		
		$row->nrty = getTextByPath($path.'b.txt');
		$row->zjml = getTextByPath($path.'c.txt');
		$row->jcpd = getTextByPath($path.'p.txt');
		$row->zzjj = getTextByPath($path.'w.txt');
		$row->sp = getTextByPath($path.'r.txt');
		$row->preface = getTextByPath($path.'f.txt');
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
			'nrty' => 'A composite field made during prepareRow().',
			'zjml' => 'A composite field made during prepareRow().',
			'jcpd' => 'A composite field made during prepareRow().',
			'zzjj' => 'A composite field made during prepareRow().',
			'sp' => 'A composite field made during prepareRow().',
			'preface' => 'A composite field made during prepareRow().',
    );
  }
}
/*
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
		
    $query = Database::getConnection('default', 'drupal6')
		->select('term_data', 'td')
             ->fields('td', array('name', 'description', 'weight', 'tid', 'vid'));
						 //->leftJoin('term_hierarchy', 'th', 'td.tid = th.tid')
						 //->leftJoin('term_data', 'tdp', 'th.parent = tdp.tid')
						// ->addField('tdp', 'name', 'parent_name')
						// ->condition('td.vid', 8, '=')
						 
             // This sort assures that parents are saved before children.
           //  ->orderBy('td.tid', 'ASC');
				*/		
						 /*
		 $query = db_select('term_data', 'td')
             ->fields('td', array('name', 'description', 'weight', 'tid', 'vid'))
						 //->leftJoin('term_hierarchy', 'th', 'td.tid = th.tid')
						 //->leftJoin('term_data', 'tdp', 'th.parent = tdp.tid')
						 //->addField('tdp', 'name', 'parent_name')
						 ->condition('td.vid', 8, '=')
						 
             // This sort assures that parents are saved before children.
             ->orderBy('td.tid', 'ASC');
						  */
							/*
		$query->leftJoin('term_hierarchy', 'th', 'td.tid = th.tid');
		$query->leftJoin('term_data', 'tdp', 'th.parent = tdp.tid');
		$query->addField('tdp', 'name', 'parent_name');
		$query->condition('td.vid', 8, '=');
		$query->orderBy('td.tid', 'ASC');
		*/
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
			/*
    // Create a MigrateSource object, which manages retrieving the input data.
   // $this->source = new MigrateSourceSQL($query);
		$this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));
		//$this->source = new MigrateSourceSQL($query);

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
    $this->addFieldMapping('parent_name','parent_name')
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
		//$this->addFieldMapping('parent_name')
		//->issueGroup(t('DNM'));
    $this->addFieldMapping('format')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('weight')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('parent')
         ->issueGroup(t('DNM'));
  }
}*/
/*
class FltrpBookTypeTermMigration extends BasicFltrpMigration {
  public function __construct() {
    parent::__construct();
    // Human-friendly description of your migration process. Be as detailed as you
    // like.
    $this->description = t('Migrate book type from the source database to taxonomy terms');

    // Create a map object for tracking the relationships between source rows
    // and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
    // class, which uses database tables for tracking. Pass the machine name
    // (BeerTerm) of this migration to use in generating map and message tables.
    // And, pass schema definitions for the primary keys of the source and
    // destination - we need to be explicit for our source, but the destination
    // class knows its schema already.
    $this->map = new MigrateSQLMap($this->machineName,
        array(
          'bsno' => array('type' => 'int',
                           'unsigned' => TRUE,
                           'not null' => TRUE,
                           'description' => 'ID of source term',
                          )
        ),
        MigrateDestinationTerm::getKeySchema()
      );

    
	 
    // Create a MigrateSource object, which manages retrieving the input data.
   // $this->source = new MigrateSourceSQL($query);
		$this->source = new MigrateSourceSQL($query, array(), NULL, array('map_joinable' => FALSE));
		//$this->source = new MigrateSourceSQL($query);
		$configuration = array(
		  'servername' =>'192.168.12.84',
			'username' =>'fltrp_dbo',
			'password' =>'chopin',
			'database' =>'fltrpnew',
		);
		$query = "select * from qrybooks";
		$count_query = "select count(*) from qrybooks";
		$fields = $this->fields();
    $this->source = new MigrateSourceMSSQL($configuration, $query, $count_query,$fields, array() );
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
    $this->addFieldMapping('parent_name','parent_name')
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
		//$this->addFieldMapping('parent_name')
		//->issueGroup(t('DNM'));
    $this->addFieldMapping('format')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('weight')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('parent')
         ->issueGroup(t('DNM'));
  }
	 function fields() {
    return array(
      'img' => 'A composite field made during prepareRow().',
    );
  }
}
*/


function getTextByPath($path) {
	if(file_exists($path)){ 
	  $data = file_get_contents($path) ;
	  //$encode = mb_detect_encoding($data, array("ASCII","latin1","GB2312","GBK","UTF-8","BIG5"));
		//$encode = mb_detect_encoding($data);
		$data = iconv('EUC-CN',"UTF-8//IGNORE",$data) ; //iconv转换
	}else{
		$data = "";
	}
	return $data;
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
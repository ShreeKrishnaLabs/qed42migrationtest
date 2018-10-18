<?php


class CityMigration extends Migration {
  public function __construct($arguments) {
      parent::__construct($arguments);
    global $base_url;
    $fields = $this->fields();
    // Second parameter is the unique ID from the source file
    $this->source = new MigrateSourceJSON($base_url ."/json/cities.json", '_id', $fields);
      //$list_url =  $base_url . "/json/list.json";
      //pattern where the files are at
     // $item_url = $base_url . "/json/:_id.json";
      //no options, or you could specify some
      $http_options = array();
      $this->destination = new MigrateDestinationEntityAPI('city_data', 'city_main');

      $this->map = new MigrateSQLMap($this->machineName,
        array(
          '_id' => array('type' => 'int',
                          'unsigned' => TRUE,
                          'not null' => TRUE,
                          'description' => t('Source ID'),
                         )
        ),
        MigrateDestinationEntityAPI::getKeySchema('city_data')
      );
      
    $this->addFieldMapping('title', 'city');
    $this->addFieldMapping('city', 'city');//define('')
    $this->addFieldMapping('state', 'state');
    $this->addFieldMapping('pop', 'pop');
    $this->addFieldMapping('city_id', '_id');//define('')
   
  }
  /**
   * Return the fields (this is cleaner than passing in the array in the MigrateSourceList class above)
   * @return array
   */
  function fields() {
    return array(
      '_id' => 'The id of the content',
     'city' => 'The city of the content',
      'loc' => 'location',
      'pop' => 'POP',
      'state' => 'State',
    );
  }
}
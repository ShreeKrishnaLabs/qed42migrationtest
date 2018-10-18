<?php
/**
 * @file
 * Declares our migrations.
 */
    

/**
 * Implements hook_migrate_api().
 */
function custom_city_migration_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'city' => array(
        'title' => t('City Migrations From JSON'),
      ),
    ),  
    'migrations' => array(
      'CityMigration' => array(
        'class_name' => 'CityMigration',
        'group_name' => 'city',
      ),  
    ),
 );

 return $api;
}
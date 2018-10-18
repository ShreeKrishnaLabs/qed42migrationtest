<?php
/* Extend the defaults.
*/
class CustomCityDataMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];
    
    $properties['created'] = array(
      'label' => t('training created'),
      'schema field' => 'created',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('created date of the assessment data.'),
    );
    $properties['updated'] = array(
      'label' => 'training updated',
      'schema field' => t('updated'),
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('updated date of the assessment data.'),
    );
    $properties['title'] = array(
      'label' => t('City title'),
      'schema field' => 'title',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('title of the rating data.'),
    );   

     $properties['type'] = array(
      'type' => 'text',
      'label' => t('Type'),
      'description' => t('The human readable name of the bundle type.'),
      'setter callback' => 'entity_property_verbatim_set',
      'getter callback' => 'entity_property_getter_method',
      'options list' => 'mymodule_type_options_list',
      'required' => TRUE,
      'schema field' => 'type',
    );
    $properties['city_id'] = array(
      'label' => t('City'),
      'schema field' => 'city_id',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('City Id of the city data.'),
    );   


    $properties['city'] = array(
      'label' => t('City'),
      'schema field' => 'city',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('title of the city data.'),
    );   

    $properties['lat'] = array(
      'label' => t('Latitude'),
      'schema field' => 'lat',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('Latitude of the city data.'),
    );   
    $properties['lng'] = array(
      'label' => t('Longitude'),
      'schema field' => 'lng',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('Longitude of the city data.'),
    );   
    $properties['pop'] = array(
      'label' => t('POP'),
      'schema field' => 'pop',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('POP of the city data.'),
    );   
    
    return $info;
  }
}

/**
* Extend the defaults.
*/
class BookingMetadataController extends EntityDefaultMetadataController {

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = $info[$this->type]['properties'];
    
    $properties['uid'] = array(
      'label' => t('booking uid'),
      'schema field' => 'uid',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('uid of the user created the assement.'),
    );   
    $properties['city_data_id'] = array(
      'label' => t('City Data id'),
      'schema field' => 'city_data_id',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('City Data ID'),
    );
    $properties['created'] = array(
      'label' => t('booking created'),
      'schema field' => 'created',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('created date of the assessment data.'),
    );
    $properties['updated'] = array(
      'label' => t('booking updated'),
      'schema field' => 'updated',
      'getter callback' => 'entity_property_getter_method',
      'setter callback' => 'entity_property_verbatim_set',
      'required' => TRUE,
      'description' => t('updated date of the assessment data.'),
    );
    return $info;
  }
}

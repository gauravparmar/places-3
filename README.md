Places
======

A module that provides a taxonomy for storing place names and associated geographic metadata.

The module will use a taxonomy entity and attach certain supplementary fields to the entity to provide geographic metadata. The module will also interface with the [Geocoder](http://drupal.org/project/geocoder) module to provide the geo-lookup on place names.

* _Place name_ for a location will be stored in the default term name field. When a user types
* Latitude and longitude values will be stored in a [Geofield](http://drupal.org/project/geofield)
* Additional geo-metadata (for location hierarchy) will be stored in the following fields:
  * Continent
  * Country
  * Admin1
  * Admin2
  * Locality
  * Suburb
  * Postcode

Due to some discrepencies between geocoding services the module will normalise continent data to the following list:
* Africa
* Europe
* Asia
* North America
* South America
* Antarctica
* Oceania

### UI

* When a users types a place name into the location field there is an autocomplete UI which suggests geocoded place names.
* Users can browse scenario content by geographic hierarchy. For example a breadcrumb or hierarchical menu like Oceania > Australia > New South Wales > Sydney > Marrickville
* Scenarios can be displayed on a map according to the geodata associated with their relevant place name.

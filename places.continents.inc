<?php

function places_get_continents() {
  return array(
    'Africa' => t('Africa'),
    'Europe' => t('Europe'),
    'Asia' => t('Asia'),
    'North America' => t('North America'),
    'South America' => t('South America'),
    'Antarctica' => t('Antarctica'),
    'Oceania' => t('Oceania'), 
  );
}


function places_get_continent_for_country($country_code /* ISO 3166-1 alpha2. */) {
  static $countries = array(
    // Africa

    'DZ' => 'Africa',   //Algeria
    'AO' => 'Africa',   //Angola
    'BJ' => 'Africa',   //Benin
    'BW' => 'Africa',   //Botswana
    'BF' => 'Africa',   //Burkina Faso
    'BI' => 'Africa',   //Burundi
    'CM' => 'Africa',   //Cameroon
    'CV' => 'Africa',   //Cape Verde
    'CF' => 'Africa',   //Central African Republic
    'TD' => 'Africa',   //Chad
    'KM' => 'Africa',   //Comoros
    'CG' => 'Africa',   //Congo
    'CI' => 'Africa',   //Côte d'Ivoire
    'CD' => 'Africa',   //Congo, the Democratic Republic of the
    'DJ' => 'Africa',   //Djibouti
    'EG' => 'Africa',   //Egypt
    'GQ' => 'Africa',   //Equatorial Guinea
    'ER' => 'Africa',   //Eritrea
    'ET' => 'Africa',   //Ethiopia
    'GA' => 'Africa',   //Gabon
    'GM' => 'Africa',   //Gambia
    'GH' => 'Africa',   //Ghana
    'GN' => 'Africa',   //Guinea
    'GW' => 'Africa',   //Guinea-Bissau
    'KE' => 'Africa',   //Kenya
    'LS' => 'Africa',   //Lesotho
    'LR' => 'Africa',   //Liberia
    'LY' => 'Africa',   //Libya
    'MG' => 'Africa',   //Madagascar
    'MW' => 'Africa',   //Malawi
    'ML' => 'Africa',   //Mali
    'MR' => 'Africa',   //Mauritania
    'MU' => 'Africa',   //Mauritius
    'YT' => 'Africa',   //Mayotte
    'MA' => 'Africa',   //Morocco
    'MZ' => 'Africa',   //Mozambique
    'NA' => 'Africa',   //Namibia
    'NE' => 'Africa',   //Niger
    'NG' => 'Africa',   //Nigeria
    'RW' => 'Africa',   //Rwanda
    'RE' => 'Africa',   //Réunion
    'SH' => 'Africa',   //Saint Helena, Ascension and Tristan da Cunha
    'SN' => 'Africa',   //Senegal
    'SC' => 'Africa',   //Seychelles
    'SL' => 'Africa',   //Sierra Leone
    'SO' => 'Africa',   //Somalia
    'ZA' => 'Africa',   //South Africa
    'SS' => 'Africa',   //South Sudan
    'SD' => 'Africa',   //Sudan
    'SZ' => 'Africa',   //Swaziland
    'ST' => 'Africa',   //São Tomé and Príncipe
    'TZ' => 'Africa',   //Tanzania, United Republic of
    'TG' => 'Africa',   //Togo
    'TN' => 'Africa',   //Tunisia
    'UG' => 'Africa',   //Uganda
    'EH' => 'Africa',   //Western Sahara
    'ZM' => 'Africa',   //Zambia
    'ZW' => 'Africa',   //Zimbabwe

    //Asia

    'AF' => 'Asia',   //Afghanistan
    'AM' => 'Asia',   //Armenia
    'AZ' => 'Asia',   //Azerbaijan
    'BH' => 'Asia',   //Bahrain
    'BD' => 'Asia',   //Bangladesh
    'BT' => 'Asia',   //Bhutan
    'IO' => 'Asia',   //British Indian Ocean Territory
    'BN' => 'Asia',   //Brunei Darussalam
    'KH' => 'Asia',   //Cambodia
    'CN' => 'Asia',   //China
    'CX' => 'Asia',   //Christmas Island
    'CC' => 'Asia',   //Cocos (Keeling) Islands
    'CY' => 'Asia',   //Cyprus
    'TL' => 'Asia',   //Timor-Leste
    'GE' => 'Asia',   //Georgia
    'HK' => 'Asia',   //Hong Kong
    'IN' => 'Asia',   //India
    'ID' => 'Asia',   //Indonesia
    'IR' => 'Asia',   //Iran, Islamic Republic of
    'IQ' => 'Asia',   //Iraq
    'IL' => 'Asia',   //Israel
    'JP' => 'Asia',   //Japan
    'JO' => 'Asia',   //Jordan
    'KZ' => 'Asia',   //Kazakhstan
    'KW' => 'Asia',   //Kuwait
    'KG' => 'Asia',   //Kyrgyzstan
    'LA' => 'Asia',   //Lao People's Democratic Republic
    'LB' => 'Asia',   //Lebanon
    'MO' => 'Asia',   //Macau
    'MY' => 'Asia',   //Malaysia
    'MV' => 'Asia',   //Maldives
    'MN' => 'Asia',   //Mongolia
    'BU' => 'Asia',   //Burma
    'MM' => 'Asia',   //Myanmar
    'NP' => 'Asia',   //Nepal
    'KP' => 'Asia',   //Korea, Democratic People's Republic of
    'OM' => 'Asia',   //Oman
    'PK' => 'Asia',   //Pakistan
    'PS' => 'Asia',   //Palestine, State of
    'PH' => 'Asia',   //Philippines
    'QA' => 'Asia',   //Qatar
    'SA' => 'Asia',   //Saudi Arabia
    'SG' => 'Asia',   //Singapore
    'KR' => 'Asia',   //Korea, Republic of
    'LK' => 'Asia',   //Sri Lanka
    'SY' => 'Asia',   //Syrian Arab Republic
    'TW' => 'Asia',   //Taiwan, Province of China
    'TJ' => 'Asia',   //Tajikistan
    'TH' => 'Asia',   //Thailand
    'TR' => 'Asia',   //Turkey
    'TM' => 'Asia',   //Turkmenistan
    'AE' => 'Asia',   //United Arab Emirates
    'UZ' => 'Asia',   //Uzbekistan
    'VN' => 'Asia',   //Vietnam
    'YE' => 'Asia',   //Yemen
    
    //Europe
    
    'AX' => 'Europe',   //Åland Islands
    'AL' => 'Europe',   //Albania
    'AD' => 'Europe',   //Andorra
    'AT' => 'Europe',   //Austria
    'BY' => 'Europe',   //Belarus
    'BE' => 'Europe',   //Belgium
    'BA' => 'Europe',   //Bosnia and Herzegovina
    'BG' => 'Europe',   //Bulgaria
    'HR' => 'Europe',   //Croatia
    'CZ' => 'Europe',   //Czech Republic
    'DK' => 'Europe',   //Denmark
    'EE' => 'Europe',   //Estonia
    'FO' => 'Europe',   //Faroe Islands
    'FI' => 'Europe',   //Finland
    'FR' => 'Europe',   //France
    'DE' => 'Europe',   //Germany
    'GI' => 'Europe',   //Gibraltar
    'GR' => 'Europe',   //Greece
    'GG' => 'Europe',   //Guernsey
    'HU' => 'Europe',   //Hungary
    'IS' => 'Europe',   //Iceland
    'IE' => 'Europe',   //Ireland
    'IM' => 'Europe',   //Isle of Man
    'IT' => 'Europe',   //Italy
    'JE' => 'Europe',   //Jersey
    'XK' => 'Europe',   //Kosovo
    'LV' => 'Europe',   //Latvia
    'LI' => 'Europe',   //Liechtenstein
    'LT' => 'Europe',   //Lithuania
    'LU' => 'Europe',   //Luxembourg
    'MK' => 'Europe',   //Macedonia, the former Yugoslav Republic of
    'MT' => 'Europe',   //Malta
    'MD' => 'Europe',   //Moldova, Republic of
    'MC' => 'Europe',   //Monaco
    'ME' => 'Europe',   //Montenegro
    'NL' => 'Europe',   //Netherlands
    'NO' => 'Europe',   //Norway
    'PL' => 'Europe',   //Poland
    'PT' => 'Europe',   //Portugal
    'RO' => 'Europe',   //Romania
    'RU' => 'Europe',   //Russian Federation
    'SM' => 'Europe',   //San Marino
    'RS' => 'Europe',   //Serbia
    'SK' => 'Europe',   //Slovakia
    'SI' => 'Europe',   //Slovenia
    'ES' => 'Europe',   //Spain
    'SE' => 'Europe',   //Sweden
    'CH' => 'Europe',   //Switzerland
    'UA' => 'Europe',   //Ukraine
    'GB' => 'Europe',   //United Kingdom

    // North America
    
    'AI' => 'North America',   //Anguilla
    'AG' => 'North America',   //Antigua and Barbuda
    'AW' => 'North America',   //Aruba
    'BS' => 'North America',   //Bahamas
    'BB' => 'North America',   //Barbados
    'BZ' => 'North America',   //Belize
    'BM' => 'North America',   //Bermuda
    'BQ' => 'North America',   //Bonaire, Sint Eustatius and Saba
    'VG' => 'North America',   //Virgin Islands, British
    'CA' => 'North America',   //Canada
    'KY' => 'North America',   //Cayman Islands
    'CP' => 'North America',   //Clipperton Island
    'CR' => 'North America',   //Costa Rica
    'CU' => 'North America',   //Cuba
    'CW' => 'North America',   //Curaçao
    'DM' => 'North America',   //Dominica
    'DO' => 'North America',   //Dominican Republic
    'SV' => 'North America',   //El Salvador
    'GL' => 'North America',   //Greenland
    'GD' => 'North America',   //Grenada
    'GP' => 'North America',   //Guadeloupe
    'GT' => 'North America',   //Guatemala
    'HT' => 'North America',   //Haiti
    'HN' => 'North America',   //Honduras
    'JM' => 'North America',   //Jamaica
    'MQ' => 'North America',   //Martinique
    'MX' => 'North America',   //Mexico
    'MS' => 'North America',   //Montserrat
    'NI' => 'North America',   //Nicaragua
    'PA' => 'North America',   //Panama
    'PR' => 'North America',   //Puerto Rico
    'BL' => 'North America',   //Saint Barthélemy
    'KN' => 'North America',   //Saint Kitts and Nevis
    'LC' => 'North America',   //Saint Lucia
    'MF' => 'North America',   //Saint Martin (French part)
    'PM' => 'North America',   //Saint Pierre and Miquelon
    'VC' => 'North America',   //Saint Vincent and the Grenadines
    'SX' => 'North America',   //Sint Maarten (Dutch part)
    'TT' => 'North America',   //Trinidad and Tobago
    'TC' => 'North America',   //Turks and Caicos Islands
    'US' => 'North America',   //United States
    'VI' => 'North America',   //Virgin Islands, U.S.

    // South America
    
    'AR' => 'South America',   //Argentina
    'BO' => 'South America',   //Bolivia, Plurinational State of
    'BR' => 'South America',   //Brazil
    'CL' => 'South America',   //Chile
    'CO' => 'South America',   //Colombia
    'EC' => 'South America',   //Ecuador
    'FK' => 'South America',   //Falkland Islands (Malvinas)
    'GF' => 'South America',   //French Guiana
    'GY' => 'South America',   //Guyana
    'PY' => 'South America',   //Paraguay
    'PE' => 'South America',   //Peru
    'SR' => 'South America',   //Suriname
    'UY' => 'South America',   //Uruguay
    'VE' => 'South America',   //Venezuela, Bolivarian Republic of

    // Oceania

    'AS' => 'Oceania',   //American Samoa
    'AU' => 'Oceania',   //Australia
    'CK' => 'Oceania',   //Cook Islands
    'FJ' => 'Oceania',   //Fiji
    'PF' => 'Oceania',   //French Polynesia
    'GU' => 'Oceania',   //Guam
    'JT' => 'Oceania',   //Johnston Island
    'KI' => 'Oceania',   //Kiribati
    'MH' => 'Oceania',   //Marshall Islands
    'FM' => 'Oceania',   //Micronesia, Federated States of
    'MI' => 'Oceania',   //Midway Islands
    'NR' => 'Oceania',   //Nauru
    'NC' => 'Oceania',   //New Caledonia
    'NZ' => 'Oceania',   //New Zealand
    'NU' => 'Oceania',   //Niue
    'NF' => 'Oceania',   //Norfolk Island
    'MP' => 'Oceania',   //Northern Mariana Islands
    'PW' => 'Oceania',   //Palau
    'PG' => 'Oceania',   //Papua New Guinea
    'PN' => 'Oceania',   //Pitcairn
    'WS' => 'Oceania',   //Samoa
    'SB' => 'Oceania',   //Solomon Islands
    'TK' => 'Oceania',   //Tokelau
    'TO' => 'Oceania',   //Tonga
    'TV' => 'Oceania',   //Tuvalu
    'VU' => 'Oceania',   //Vanuatu
    'WK' => 'Oceania',   //Wake Island
    'WF' => 'Oceania',   //Wallis and Futuna
    'PU' => 'Oceania',   //U.S. Miscellaneous Pacific Islands

    // Antarctica
    
    'BV' => 'Antarctica',   //Bouvet Island
    'TF' => 'Antarctica',   //French Southern Territories
    'HM' => 'Antarctica',   //Heard Island and McDonald Islands
    'GS' => 'Antarctica',   //South Georgia and the South Sandwich Islands
  );

  $country_code = strtoupper($country_code);
  if (array_key_exists($country_code,$countries)) {
    return $countries[$country_code];
  }
  return null;  
}

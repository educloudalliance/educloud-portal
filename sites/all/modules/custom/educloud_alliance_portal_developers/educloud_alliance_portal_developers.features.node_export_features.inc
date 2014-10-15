<?php
/**
 * @file
 * educloud_alliance_portal_developers.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function educloud_alliance_portal_developers_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'vid\' => \'2\',
      \'uid\' => \'0\',
      \'title\' => \'Developers\',
      \'log\' => \'\',
      \'status\' => \'1\',
      \'comment\' => \'1\',
      \'promote\' => \'0\',
      \'sticky\' => \'0\',
      \'vuuid\' => \'be6d892c-8210-438b-b09c-884894f77a11\',
      \'nid\' => \'2\',
      \'type\' => \'page\',
      \'language\' => \'und\',
      \'created\' => \'1413355518\',
      \'changed\' => \'1413355518\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'uuid\' => \'7df09432-6589-4e9a-8a97-292647939c8a\',
      \'revision_timestamp\' => \'1413355518\',
      \'revision_uid\' => \'0\',
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Ut dolor ligula, pulvinar in interdum et, ullamcorper non sem. Suspendisse luctus feugiat ipsum, sed fermentum nisi molestie nec. Aenean vel purus cursus diam fermentum tempor. Aliquam erat volutpat. Pellentesque blandit in augue porta consectetur. Maecenas eu risus vitae neque blandit aliquet. Sed finibus vel erat a laoreet? Duis non mattis lorem. Fusce gravida nisi et vehicula ullamcorper. Duis egestas posuere vestibulum! Duis ut ullamcorper elit, in interdum eros.\\r\\n\\r\\nVestibulum molestie varius feugiat. Pellentesque ornare vulputate ligula, vitae sollicitudin nisi fringilla sit amet. Fusce venenatis venenatis tempor. Sed varius metus vel erat tincidunt, vitae feugiat lectus eleifend. Quisque scelerisque tincidunt nisi, nec commodo est vestibulum at. Aliquam sit amet pulvinar tellus. Aenean ornare eleifend interdum. Nunc risus justo; varius non commodo non, venenatis id eros.\\r\\n\\r\\nCurabitur scelerisque arcu a massa sollicitudin, et laoreet erat eleifend. Praesent varius non dui vitae condimentum. Sed condimentum non augue laoreet tincidunt. Proin at nunc non magna consectetur euismod sit amet et arcu. Aenean sagittis magna non velit tempor tempus. Nullam molestie a purus sed vehicula! amet.\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Ut dolor ligula, pulvinar in interdum et, ullamcorper non sem. Suspendisse luctus feugiat ipsum, sed fermentum nisi molestie nec. Aenean vel purus cursus diam fermentum tempor. Aliquam erat volutpat. Pellentesque blandit in augue porta consectetur. Maecenas eu risus vitae neque blandit aliquet. Sed finibus vel erat a laoreet? Duis non mattis lorem. Fusce gravida nisi et vehicula ullamcorper. Duis egestas posuere vestibulum! Duis ut ullamcorper elit, in interdum eros.</p>\\n<p>Vestibulum molestie varius feugiat. Pellentesque ornare vulputate ligula, vitae sollicitudin nisi fringilla sit amet. Fusce venenatis venenatis tempor. Sed varius metus vel erat tincidunt, vitae feugiat lectus eleifend. Quisque scelerisque tincidunt nisi, nec commodo est vestibulum at. Aliquam sit amet pulvinar tellus. Aenean ornare eleifend interdum. Nunc risus justo; varius non commodo non, venenatis id eros.</p>\\n<p>Curabitur scelerisque arcu a massa sollicitudin, et laoreet erat eleifend. Praesent varius non dui vitae condimentum. Sed condimentum non augue laoreet tincidunt. Proin at nunc non magna consectetur euismod sit amet et arcu. Aenean sagittis magna non velit tempor tempus. Nullam molestie a purus sed vehicula! amet.</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'cid\' => \'0\',
      \'last_comment_timestamp\' => \'1413355518\',
      \'last_comment_name\' => NULL,
      \'last_comment_uid\' => \'0\',
      \'comment_count\' => \'0\',
      \'name\' => \'\',
      \'picture\' => \'0\',
      \'data\' => NULL,
      \'path\' => FALSE,
      \'menu\' => NULL,
      \'node_export_drupal_version\' => \'7\',
    ),
)',
);
  return $node_export;
}

<?php

/**
 * Field handler to provide title links to drupal nodes
 *
 * @ingroup views_field_handlers
 */
class activitystream_handler_activitystream_icon extends views_handler_field {
  
  function render($values) {
    //return print_r($values, true);
    return theme($values->activitystream_module .'_icon');
    //return l(check_plain($values->feed_title), $values->feed_url, array('html' => TRUE));
  }

}
<?php
/**
 * @file
 * asu_isearch.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function asu_isearch_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:asu_isearch_profile:default:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'asu_isearch_profile';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'default';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'isearch_profile_2col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'header' => NULL,
      'photo' => NULL,
      'contact' => NULL,
      'sidebar' => NULL,
      'contentmain' => NULL,
      'social' => NULL,
      'tab-publicwork' => NULL,
      'tab-bio' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'tab-research' => NULL,
      'tab-teaching' => NULL,
      'maincontent' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'affiliations' => NULL,
    ),
    'tab-bio' => array(
      'style' => 'tabs',
    ),
    'tab-teaching' => array(
      'style' => '0',
    ),
    'tab-research' => array(
      'style' => '0',
    ),
    'tab-publicwork' => array(
      'style' => '0',
    ),
    'maincontent' => array(
      'style' => 'tabs-extended',
    ),
    'affiliations' => array(
      'style' => '0',
    ),
    'header' => array(
      'style' => '0',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '79cbf870-242e-429c-94b5-f5bce348bb0e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-709cd68d-6c07-4de9-aea3-e1a7df715336';
    $pane->panel = 'affiliations';
    $pane->type = 'views_panes';
    $pane->subtype = 'isearch_affiliations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_settings' => 'fields',
      'header_type' => 'none',
      'view_mode' => 'full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '709cd68d-6c07-4de9-aea3-e1a7df715336';
    $display->content['new-709cd68d-6c07-4de9-aea3-e1a7df715336'] = $pane;
    $display->panels['affiliations'][0] = 'new-709cd68d-6c07-4de9-aea3-e1a7df715336';
    $pane = new stdClass();
    $pane->pid = 'new-29dd006f-7b70-4c27-b98f-e652e8afd535';
    $pane->panel = 'contact';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '29dd006f-7b70-4c27-b98f-e652e8afd535';
    $display->content['new-29dd006f-7b70-4c27-b98f-e652e8afd535'] = $pane;
    $display->panels['contact'][0] = 'new-29dd006f-7b70-4c27-b98f-e652e8afd535';
    $pane = new stdClass();
    $pane->pid = 'new-9e8d0fd2-f251-4495-931c-6d323d0767e6';
    $pane->panel = 'contact';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9e8d0fd2-f251-4495-931c-6d323d0767e6';
    $display->content['new-9e8d0fd2-f251-4495-931c-6d323d0767e6'] = $pane;
    $display->panels['contact'][1] = 'new-9e8d0fd2-f251-4495-931c-6d323d0767e6';
    $pane = new stdClass();
    $pane->pid = 'new-e6ba2727-84fe-40bc-a12d-5ad4bd396361';
    $pane->panel = 'contact';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_campus_building';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e6ba2727-84fe-40bc-a12d-5ad4bd396361';
    $display->content['new-e6ba2727-84fe-40bc-a12d-5ad4bd396361'] = $pane;
    $display->panels['contact'][2] = 'new-e6ba2727-84fe-40bc-a12d-5ad4bd396361';
    $pane = new stdClass();
    $pane->pid = 'new-9469bf51-9918-42c4-a0c7-134e95eb5d92';
    $pane->panel = 'contact';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_campus_room';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '9469bf51-9918-42c4-a0c7-134e95eb5d92';
    $display->content['new-9469bf51-9918-42c4-a0c7-134e95eb5d92'] = $pane;
    $display->panels['contact'][3] = 'new-9469bf51-9918-42c4-a0c7-134e95eb5d92';
    $pane = new stdClass();
    $pane->pid = 'new-cab943f3-abd7-45bf-9f5d-19d5506307cf';
    $pane->panel = 'header';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h2',
      'id' => '',
      'class' => '',
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cab943f3-abd7-45bf-9f5d-19d5506307cf';
    $display->content['new-cab943f3-abd7-45bf-9f5d-19d5506307cf'] = $pane;
    $display->panels['header'][0] = 'new-cab943f3-abd7-45bf-9f5d-19d5506307cf';
    $pane = new stdClass();
    $pane->pid = 'new-adfb4591-2608-4c80-a849-1c2924acf758';
    $pane->panel = 'maincontent';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'adfb4591-2608-4c80-a849-1c2924acf758';
    $display->content['new-adfb4591-2608-4c80-a849-1c2924acf758'] = $pane;
    $display->panels['maincontent'][0] = 'new-adfb4591-2608-4c80-a849-1c2924acf758';
    $pane = new stdClass();
    $pane->pid = 'new-787f6602-0b89-4467-aad9-0062cae9ce91';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_bio';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '787f6602-0b89-4467-aad9-0062cae9ce91';
    $display->content['new-787f6602-0b89-4467-aad9-0062cae9ce91'] = $pane;
    $display->panels['maincontent'][1] = 'new-787f6602-0b89-4467-aad9-0062cae9ce91';
    $pane = new stdClass();
    $pane->pid = 'new-38e9b316-5f99-4b6e-bf82-aa41c5339a3a';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_fax';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '38e9b316-5f99-4b6e-bf82-aa41c5339a3a';
    $display->content['new-38e9b316-5f99-4b6e-bf82-aa41c5339a3a'] = $pane;
    $display->panels['maincontent'][2] = 'new-38e9b316-5f99-4b6e-bf82-aa41c5339a3a';
    $pane = new stdClass();
    $pane->pid = 'new-d19ef1d5-a89d-4a75-bd92-49259ddc3d7b';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_cv_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd19ef1d5-a89d-4a75-bd92-49259ddc3d7b';
    $display->content['new-d19ef1d5-a89d-4a75-bd92-49259ddc3d7b'] = $pane;
    $display->panels['maincontent'][3] = 'new-d19ef1d5-a89d-4a75-bd92-49259ddc3d7b';
    $pane = new stdClass();
    $pane->pid = 'new-90cb2a54-c418-4570-bb24-15e25e1851d9';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_education';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '90cb2a54-c418-4570-bb24-15e25e1851d9';
    $display->content['new-90cb2a54-c418-4570-bb24-15e25e1851d9'] = $pane;
    $display->panels['maincontent'][4] = 'new-90cb2a54-c418-4570-bb24-15e25e1851d9';
    $pane = new stdClass();
    $pane->pid = 'new-8be2b6de-7166-4f46-9ad6-6a97b32073f1';
    $pane->panel = 'maincontent';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '8be2b6de-7166-4f46-9ad6-6a97b32073f1';
    $display->content['new-8be2b6de-7166-4f46-9ad6-6a97b32073f1'] = $pane;
    $display->panels['maincontent'][5] = 'new-8be2b6de-7166-4f46-9ad6-6a97b32073f1';
    $pane = new stdClass();
    $pane->pid = 'new-5f8556d6-bb48-4842-b92e-a4131dce6163';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_rsrch_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '5f8556d6-bb48-4842-b92e-a4131dce6163';
    $display->content['new-5f8556d6-bb48-4842-b92e-a4131dce6163'] = $pane;
    $display->panels['maincontent'][6] = 'new-5f8556d6-bb48-4842-b92e-a4131dce6163';
    $pane = new stdClass();
    $pane->pid = 'new-305364cb-c43b-432b-bed2-e6b71ed4ddde';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_rsrch_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '305364cb-c43b-432b-bed2-e6b71ed4ddde';
    $display->content['new-305364cb-c43b-432b-bed2-e6b71ed4ddde'] = $pane;
    $display->panels['maincontent'][7] = 'new-305364cb-c43b-432b-bed2-e6b71ed4ddde';
    $pane = new stdClass();
    $pane->pid = 'new-b0e37e68-3f1b-4317-9357-e1068a20981c';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_rsrch_group';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = 'b0e37e68-3f1b-4317-9357-e1068a20981c';
    $display->content['new-b0e37e68-3f1b-4317-9357-e1068a20981c'] = $pane;
    $display->panels['maincontent'][8] = 'new-b0e37e68-3f1b-4317-9357-e1068a20981c';
    $pane = new stdClass();
    $pane->pid = 'new-c61d852e-e0d4-4212-a00e-3fe78051c924';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_rsrch_publications';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'c61d852e-e0d4-4212-a00e-3fe78051c924';
    $display->content['new-c61d852e-e0d4-4212-a00e-3fe78051c924'] = $pane;
    $display->panels['maincontent'][9] = 'new-c61d852e-e0d4-4212-a00e-3fe78051c924';
    $pane = new stdClass();
    $pane->pid = 'new-423ddb32-dde2-4406-be49-41ae21939dad';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_rsrch_activity';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '423ddb32-dde2-4406-be49-41ae21939dad';
    $display->content['new-423ddb32-dde2-4406-be49-41ae21939dad'] = $pane;
    $display->panels['maincontent'][10] = 'new-423ddb32-dde2-4406-be49-41ae21939dad';
    $pane = new stdClass();
    $pane->pid = 'new-bc98b089-23f9-4c8f-b93e-138b7b6083ba';
    $pane->panel = 'maincontent';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'bc98b089-23f9-4c8f-b93e-138b7b6083ba';
    $display->content['new-bc98b089-23f9-4c8f-b93e-138b7b6083ba'] = $pane;
    $display->panels['maincontent'][11] = 'new-bc98b089-23f9-4c8f-b93e-138b7b6083ba';
    $pane = new stdClass();
    $pane->pid = 'new-1d733a73-f0f4-4528-a52a-3cf0d9002558';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_tch_courses';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '1d733a73-f0f4-4528-a52a-3cf0d9002558';
    $display->content['new-1d733a73-f0f4-4528-a52a-3cf0d9002558'] = $pane;
    $display->panels['maincontent'][12] = 'new-1d733a73-f0f4-4528-a52a-3cf0d9002558';
    $pane = new stdClass();
    $pane->pid = 'new-c9e298fe-45f1-4a06-adc1-9a6d15d317cf';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_tch_website';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'c9e298fe-45f1-4a06-adc1-9a6d15d317cf';
    $display->content['new-c9e298fe-45f1-4a06-adc1-9a6d15d317cf'] = $pane;
    $display->panels['maincontent'][13] = 'new-c9e298fe-45f1-4a06-adc1-9a6d15d317cf';
    $pane = new stdClass();
    $pane->pid = 'new-de12ed4f-0d7e-45ec-aec1-ff890fee2e33';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_tch_presentations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'de12ed4f-0d7e-45ec-aec1-ff890fee2e33';
    $display->content['new-de12ed4f-0d7e-45ec-aec1-ff890fee2e33'] = $pane;
    $display->panels['maincontent'][14] = 'new-de12ed4f-0d7e-45ec-aec1-ff890fee2e33';
    $pane = new stdClass();
    $pane->pid = 'new-ad7abd4f-b4e2-4c77-902e-75b4e3bf7984';
    $pane->panel = 'maincontent';
    $pane->type = 'fieldable_panels_pane';
    $pane->subtype = 'fpid:7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'Full',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'ad7abd4f-b4e2-4c77-902e-75b4e3bf7984';
    $display->content['new-ad7abd4f-b4e2-4c77-902e-75b4e3bf7984'] = $pane;
    $display->panels['maincontent'][15] = 'new-ad7abd4f-b4e2-4c77-902e-75b4e3bf7984';
    $pane = new stdClass();
    $pane->pid = 'new-d7724bfb-6477-4c27-a29f-4998b0339d48';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_honors_awards';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = 'd7724bfb-6477-4c27-a29f-4998b0339d48';
    $display->content['new-d7724bfb-6477-4c27-a29f-4998b0339d48'] = $pane;
    $display->panels['maincontent'][16] = 'new-d7724bfb-6477-4c27-a29f-4998b0339d48';
    $pane = new stdClass();
    $pane->pid = 'new-1d9bc0c6-b7ea-48da-bec6-221b7b09fbff';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_editorships';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '1d9bc0c6-b7ea-48da-bec6-221b7b09fbff';
    $display->content['new-1d9bc0c6-b7ea-48da-bec6-221b7b09fbff'] = $pane;
    $display->panels['maincontent'][17] = 'new-1d9bc0c6-b7ea-48da-bec6-221b7b09fbff';
    $pane = new stdClass();
    $pane->pid = 'new-4c125d29-1020-404f-abe8-b3d8f562f4bd';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_prof_associations';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = '4c125d29-1020-404f-abe8-b3d8f562f4bd';
    $display->content['new-4c125d29-1020-404f-abe8-b3d8f562f4bd'] = $pane;
    $display->panels['maincontent'][18] = 'new-4c125d29-1020-404f-abe8-b3d8f562f4bd';
    $pane = new stdClass();
    $pane->pid = 'new-23951c5c-ff86-4bf2-a0c9-4f6a4395680c';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_service';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 19;
    $pane->locks = array();
    $pane->uuid = '23951c5c-ff86-4bf2-a0c9-4f6a4395680c';
    $display->content['new-23951c5c-ff86-4bf2-a0c9-4f6a4395680c'] = $pane;
    $display->panels['maincontent'][19] = 'new-23951c5c-ff86-4bf2-a0c9-4f6a4395680c';
    $pane = new stdClass();
    $pane->pid = 'new-42bd8c51-2608-4d44-aee8-3636f0c0cb4a';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_graduate_faculties';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 20;
    $pane->locks = array();
    $pane->uuid = '42bd8c51-2608-4d44-aee8-3636f0c0cb4a';
    $display->content['new-42bd8c51-2608-4d44-aee8-3636f0c0cb4a'] = $pane;
    $display->panels['maincontent'][20] = 'new-42bd8c51-2608-4d44-aee8-3636f0c0cb4a';
    $pane = new stdClass();
    $pane->pid = 'new-ac65db36-e520-4feb-a74a-63a641ed27de';
    $pane->panel = 'maincontent';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_work_history';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 21;
    $pane->locks = array();
    $pane->uuid = 'ac65db36-e520-4feb-a74a-63a641ed27de';
    $display->content['new-ac65db36-e520-4feb-a74a-63a641ed27de'] = $pane;
    $display->panels['maincontent'][21] = 'new-ac65db36-e520-4feb-a74a-63a641ed27de';
    $pane = new stdClass();
    $pane->pid = 'new-1be56e61-ee22-420a-be5c-3328dce01a36';
    $pane->panel = 'photo';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_photo_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
        'file_view_mode' => 'responsive_image',
      ),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1be56e61-ee22-420a-be5c-3328dce01a36';
    $display->content['new-1be56e61-ee22-420a-be5c-3328dce01a36'] = $pane;
    $display->panels['photo'][0] = 'new-1be56e61-ee22-420a-be5c-3328dce01a36';
    $pane = new stdClass();
    $pane->pid = 'new-8b489a7c-b4b5-4041-b9ca-ff690239a022';
    $pane->panel = 'sidebar';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_expertise_areas';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => array(),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8b489a7c-b4b5-4041-b9ca-ff690239a022';
    $display->content['new-8b489a7c-b4b5-4041-b9ca-ff690239a022'] = $pane;
    $display->panels['sidebar'][0] = 'new-8b489a7c-b4b5-4041-b9ca-ff690239a022';
    $pane = new stdClass();
    $pane->pid = 'new-0f82ff4d-6370-4af0-810b-9d521adc71a0';
    $pane->panel = 'social';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_social_facebook';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0f82ff4d-6370-4af0-810b-9d521adc71a0';
    $display->content['new-0f82ff4d-6370-4af0-810b-9d521adc71a0'] = $pane;
    $display->panels['social'][0] = 'new-0f82ff4d-6370-4af0-810b-9d521adc71a0';
    $pane = new stdClass();
    $pane->pid = 'new-f639faf5-3f89-4fc9-b7b0-3b226d39f2b2';
    $pane->panel = 'social';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_social_twitter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f639faf5-3f89-4fc9-b7b0-3b226d39f2b2';
    $display->content['new-f639faf5-3f89-4fc9-b7b0-3b226d39f2b2'] = $pane;
    $display->panels['social'][1] = 'new-f639faf5-3f89-4fc9-b7b0-3b226d39f2b2';
    $pane = new stdClass();
    $pane->pid = 'new-df6a3578-c424-47f0-a6a1-126dc3a6f9d9';
    $pane->panel = 'social';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_social_googleplus';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'df6a3578-c424-47f0-a6a1-126dc3a6f9d9';
    $display->content['new-df6a3578-c424-47f0-a6a1-126dc3a6f9d9'] = $pane;
    $display->panels['social'][2] = 'new-df6a3578-c424-47f0-a6a1-126dc3a6f9d9';
    $pane = new stdClass();
    $pane->pid = 'new-00b46ea0-f6d1-4249-b420-28a9fb22d511';
    $pane->panel = 'social';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_social_linkedin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '00b46ea0-f6d1-4249-b420-28a9fb22d511';
    $display->content['new-00b46ea0-f6d1-4249-b420-28a9fb22d511'] = $pane;
    $display->panels['social'][3] = 'new-00b46ea0-f6d1-4249-b420-28a9fb22d511';
    $pane = new stdClass();
    $pane->pid = 'new-feaf4143-5ede-46ea-b465-519bbcae2908';
    $pane->panel = 'social';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_isearch_social_personalweb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'feaf4143-5ede-46ea-b465-519bbcae2908';
    $display->content['new-feaf4143-5ede-46ea-b465-519bbcae2908'] = $pane;
    $display->panels['social'][4] = 'new-feaf4143-5ede-46ea-b465-519bbcae2908';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:asu_isearch_profile:default:default'] = $panelizer;

  return $export;
}
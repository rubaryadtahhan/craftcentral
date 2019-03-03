<?php
/*
+--------------------------------------------------------------------+
| CiviCRM version 4.6                                                |
+--------------------------------------------------------------------+
| Copyright CiviCRM LLC (c) 2004-2015                                |
+--------------------------------------------------------------------+
| This file is a part of CiviCRM.                                    |
|                                                                    |
| CiviCRM is free software; you can copy, modify, and distribute it  |
| under the terms of the GNU Affero General Public License           |
| Version 3, 19 November 2007 and the CiviCRM Licensing Exception.   |
|                                                                    |
| CiviCRM is distributed in the hope that it will be useful, but     |
| WITHOUT ANY WARRANTY; without even the implied warranty of         |
| MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.               |
| See the GNU Affero General Public License for more details.        |
|                                                                    |
| You should have received a copy of the GNU Affero General Public   |
| License and the CiviCRM Licensing Exception along                  |
| with this program; if not, contact CiviCRM LLC                     |
| at info[AT]civicrm[DOT]org. If you have questions about the        |
| GNU Affero General Public License or the licensing of CiviCRM,     |
| see the CiviCRM license FAQ at http://civicrm.org/licensing        |
+--------------------------------------------------------------------+
*/
/**
 * @package CRM
 * @copyright CiviCRM LLC (c) 2004-2015
 *
 * Generated from xml/schema/CRM/Core/Menu.xml
 * DO NOT EDIT.  Generated by CRM_Core_CodeGen
 */
require_once 'CRM/Core/DAO.php';
require_once 'CRM/Utils/Type.php';
class CRM_Core_DAO_Menu extends CRM_Core_DAO {
  /**
   * static instance to hold the table name
   *
   * @var string
   */
  static $_tableName = 'civicrm_menu';
  /**
   * static instance to hold the field values
   *
   * @var array
   */
  static $_fields = null;
  /**
   * static instance to hold the keys used in $_fields for each field.
   *
   * @var array
   */
  static $_fieldKeys = null;
  /**
   * static instance to hold the FK relationships
   *
   * @var string
   */
  static $_links = null;
  /**
   * static instance to hold the values that can
   * be imported
   *
   * @var array
   */
  static $_import = null;
  /**
   * static instance to hold the values that can
   * be exported
   *
   * @var array
   */
  static $_export = null;
  /**
   * static value to see if we should log any modifications to
   * this table in the civicrm_log table
   *
   * @var boolean
   */
  static $_log = false;
  /**
   *
   * @var int unsigned
   */
  public $id;
  /**
   * Which Domain is this menu item for
   *
   * @var int unsigned
   */
  public $domain_id;
  /**
   * Path Name
   *
   * @var string
   */
  public $path;
  /**
   * Arguments to pass to the url
   *
   * @var text
   */
  public $path_arguments;
  /**
   * Menu Title
   *
   * @var string
   */
  public $title;
  /**
   * Function to call to check access permissions
   *
   * @var string
   */
  public $access_callback;
  /**
   * Arguments to pass to access callback
   *
   * @var text
   */
  public $access_arguments;
  /**
   * function to call for this url
   *
   * @var string
   */
  public $page_callback;
  /**
   * Arguments to pass to page callback
   *
   * @var text
   */
  public $page_arguments;
  /**
   * Breadcrumb for the path.
   *
   * @var text
   */
  public $breadcrumb;
  /**
   * Url where a page should redirected to, if next url not known.
   *
   * @var string
   */
  public $return_url;
  /**
   * Arguments to pass to return_url
   *
   * @var string
   */
  public $return_url_args;
  /**
   * Component that this menu item belongs to
   *
   * @var int unsigned
   */
  public $component_id;
  /**
   * Is this menu item active?
   *
   * @var boolean
   */
  public $is_active;
  /**
   * Is this menu accessible to the public?
   *
   * @var boolean
   */
  public $is_public;
  /**
   * Is this menu exposed to the navigation system?
   *
   * @var boolean
   */
  public $is_exposed;
  /**
   * Should this menu be exposed via SSL if enabled?
   *
   * @var boolean
   */
  public $is_ssl;
  /**
   * Ordering of the menu items in various blocks.
   *
   * @var int
   */
  public $weight;
  /**
   * Drupal menu type.
   *
   * @var int
   */
  public $type;
  /**
   * CiviCRM menu type.
   *
   * @var int
   */
  public $page_type;
  /**
   * skip this url being exposed to breadcrumb
   *
   * @var boolean
   */
  public $skipBreadcrumb;
  /**
   * class constructor
   *
   * @return civicrm_menu
   */
  function __construct() {
    $this->__table = 'civicrm_menu';
    parent::__construct();
  }
  /**
   * Returns foreign keys and entity references
   *
   * @return array
   *   [CRM_Core_Reference_Interface]
   */
  static function getReferenceColumns() {
    if (!self::$_links) {
      self::$_links = static ::createReferenceColumns(__CLASS__);
      self::$_links[] = new CRM_Core_Reference_Basic(self::getTableName() , 'domain_id', 'civicrm_domain', 'id');
      self::$_links[] = new CRM_Core_Reference_Basic(self::getTableName() , 'component_id', 'civicrm_component', 'id');
    }
    return self::$_links;
  }
  /**
   * Returns all the column names of this table
   *
   * @return array
   */
  static function &fields() {
    if (!(self::$_fields)) {
      self::$_fields = array(
        'id' => array(
          'name' => 'id',
          'type' => CRM_Utils_Type::T_INT,
          'required' => true,
        ) ,
        'domain_id' => array(
          'name' => 'domain_id',
          'type' => CRM_Utils_Type::T_INT,
          'description' => 'Which Domain is this menu item for',
          'required' => true,
          'FKClassName' => 'CRM_Core_DAO_Domain',
          'pseudoconstant' => array(
            'table' => 'civicrm_domain',
            'keyColumn' => 'id',
            'labelColumn' => 'name',
          )
        ) ,
        'path' => array(
          'name' => 'path',
          'type' => CRM_Utils_Type::T_STRING,
          'title' => ts('Path') ,
          'description' => 'Path Name',
          'maxlength' => 255,
          'size' => CRM_Utils_Type::HUGE,
        ) ,
        'path_arguments' => array(
          'name' => 'path_arguments',
          'type' => CRM_Utils_Type::T_TEXT,
          'title' => ts('Path Arguments') ,
          'description' => 'Arguments to pass to the url',
        ) ,
        'title' => array(
          'name' => 'title',
          'type' => CRM_Utils_Type::T_STRING,
          'title' => ts('Title') ,
          'description' => 'Menu Title',
          'maxlength' => 255,
          'size' => CRM_Utils_Type::HUGE,
        ) ,
        'access_callback' => array(
          'name' => 'access_callback',
          'type' => CRM_Utils_Type::T_STRING,
          'title' => ts('Access Callback') ,
          'description' => 'Function to call to check access permissions',
          'maxlength' => 255,
          'size' => CRM_Utils_Type::HUGE,
        ) ,
        'access_arguments' => array(
          'name' => 'access_arguments',
          'type' => CRM_Utils_Type::T_TEXT,
          'title' => ts('Access Arguments') ,
          'description' => 'Arguments to pass to access callback',
        ) ,
        'page_callback' => array(
          'name' => 'page_callback',
          'type' => CRM_Utils_Type::T_STRING,
          'title' => ts('Page Callback') ,
          'description' => 'function to call for this url',
          'maxlength' => 255,
          'size' => CRM_Utils_Type::HUGE,
        ) ,
        'page_arguments' => array(
          'name' => 'page_arguments',
          'type' => CRM_Utils_Type::T_TEXT,
          'title' => ts('Page Arguments') ,
          'description' => 'Arguments to pass to page callback',
        ) ,
        'breadcrumb' => array(
          'name' => 'breadcrumb',
          'type' => CRM_Utils_Type::T_TEXT,
          'title' => ts('Breadcrumb') ,
          'description' => 'Breadcrumb for the path.',
        ) ,
        'return_url' => array(
          'name' => 'return_url',
          'type' => CRM_Utils_Type::T_STRING,
          'title' => ts('Return Url') ,
          'description' => 'Url where a page should redirected to, if next url not known.',
          'maxlength' => 255,
          'size' => CRM_Utils_Type::HUGE,
        ) ,
        'return_url_args' => array(
          'name' => 'return_url_args',
          'type' => CRM_Utils_Type::T_STRING,
          'title' => ts('Return Url Args') ,
          'description' => 'Arguments to pass to return_url',
          'maxlength' => 255,
          'size' => CRM_Utils_Type::HUGE,
        ) ,
        'component_id' => array(
          'name' => 'component_id',
          'type' => CRM_Utils_Type::T_INT,
          'description' => 'Component that this menu item belongs to',
          'FKClassName' => 'CRM_Core_DAO_Component',
          'html' => array(
            'type' => 'Select',
          ) ,
          'pseudoconstant' => array(
            'table' => 'civicrm_component',
            'keyColumn' => 'id',
            'labelColumn' => 'name',
          )
        ) ,
        'is_active' => array(
          'name' => 'is_active',
          'type' => CRM_Utils_Type::T_BOOLEAN,
          'description' => 'Is this menu item active?',
        ) ,
        'is_public' => array(
          'name' => 'is_public',
          'type' => CRM_Utils_Type::T_BOOLEAN,
          'description' => 'Is this menu accessible to the public?',
        ) ,
        'is_exposed' => array(
          'name' => 'is_exposed',
          'type' => CRM_Utils_Type::T_BOOLEAN,
          'description' => 'Is this menu exposed to the navigation system?',
        ) ,
        'is_ssl' => array(
          'name' => 'is_ssl',
          'type' => CRM_Utils_Type::T_BOOLEAN,
          'description' => 'Should this menu be exposed via SSL if enabled?',
        ) ,
        'weight' => array(
          'name' => 'weight',
          'type' => CRM_Utils_Type::T_INT,
          'title' => ts('Order') ,
          'description' => 'Ordering of the menu items in various blocks.',
          'required' => true,
          'default' => '1',
        ) ,
        'type' => array(
          'name' => 'type',
          'type' => CRM_Utils_Type::T_INT,
          'title' => ts('Type') ,
          'description' => 'Drupal menu type.',
          'required' => true,
          'default' => '1',
        ) ,
        'page_type' => array(
          'name' => 'page_type',
          'type' => CRM_Utils_Type::T_INT,
          'title' => ts('Page Type') ,
          'description' => 'CiviCRM menu type.',
          'required' => true,
          'default' => '1',
        ) ,
        'skipBreadcrumb' => array(
          'name' => 'skipBreadcrumb',
          'type' => CRM_Utils_Type::T_BOOLEAN,
          'title' => ts('Skipbreadcrumb') ,
          'description' => 'skip this url being exposed to breadcrumb',
        ) ,
      );
    }
    return self::$_fields;
  }
  /**
   * Returns an array containing, for each field, the arary key used for that
   * field in self::$_fields.
   *
   * @return array
   */
  static function &fieldKeys() {
    if (!(self::$_fieldKeys)) {
      self::$_fieldKeys = array(
        'id' => 'id',
        'domain_id' => 'domain_id',
        'path' => 'path',
        'path_arguments' => 'path_arguments',
        'title' => 'title',
        'access_callback' => 'access_callback',
        'access_arguments' => 'access_arguments',
        'page_callback' => 'page_callback',
        'page_arguments' => 'page_arguments',
        'breadcrumb' => 'breadcrumb',
        'return_url' => 'return_url',
        'return_url_args' => 'return_url_args',
        'component_id' => 'component_id',
        'is_active' => 'is_active',
        'is_public' => 'is_public',
        'is_exposed' => 'is_exposed',
        'is_ssl' => 'is_ssl',
        'weight' => 'weight',
        'type' => 'type',
        'page_type' => 'page_type',
        'skipBreadcrumb' => 'skipBreadcrumb',
      );
    }
    return self::$_fieldKeys;
  }
  /**
   * Returns the names of this table
   *
   * @return string
   */
  static function getTableName() {
    return self::$_tableName;
  }
  /**
   * Returns if this table needs to be logged
   *
   * @return boolean
   */
  function getLog() {
    return self::$_log;
  }
  /**
   * Returns the list of fields that can be imported
   *
   * @param bool $prefix
   *
   * @return array
   */
  static function &import($prefix = false) {
    if (!(self::$_import)) {
      self::$_import = array();
      $fields = self::fields();
      foreach($fields as $name => $field) {
        if (CRM_Utils_Array::value('import', $field)) {
          if ($prefix) {
            self::$_import['menu'] = & $fields[$name];
          } else {
            self::$_import[$name] = & $fields[$name];
          }
        }
      }
    }
    return self::$_import;
  }
  /**
   * Returns the list of fields that can be exported
   *
   * @param bool $prefix
   *
   * @return array
   */
  static function &export($prefix = false) {
    if (!(self::$_export)) {
      self::$_export = array();
      $fields = self::fields();
      foreach($fields as $name => $field) {
        if (CRM_Utils_Array::value('export', $field)) {
          if ($prefix) {
            self::$_export['menu'] = & $fields[$name];
          } else {
            self::$_export[$name] = & $fields[$name];
          }
        }
      }
    }
    return self::$_export;
  }
}
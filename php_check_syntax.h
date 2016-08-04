#define PHP_CHECK_SYNTAX_EXTNAME "check_syntax"
#define PHP_CHECK_SYNTAX_VERSION "1.0"

extern zend_module_entry check_syntax_module_entry;
#define phpext_check_syntax_ptr &check_syntax_module_entry

PHP_FUNCTION(php_check_syntax);


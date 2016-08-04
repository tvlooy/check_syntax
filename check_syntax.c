#include "php.h"

#include "php_check_syntax.h"

zend_function_entry check_syntax_functions[] = {
  PHP_FE(php_check_syntax, NULL)
  PHP_FE_END
};

zend_module_entry check_syntax_module_entry = {
  STANDARD_MODULE_HEADER,
  PHP_CHECK_SYNTAX_EXTNAME,
  check_syntax_functions,
  NULL, NULL, NULL, NULL, NULL,
  PHP_CHECK_SYNTAX_VERSION,
  STANDARD_MODULE_PROPERTIES
};

ZEND_GET_MODULE(check_syntax)

PHP_FUNCTION(php_check_syntax) {
   char *filename;
   size_t filename_len;
   zend_file_handle file_handle = {{0}, NULL, NULL, ZEND_HANDLE_FILENAME, 0};

   if (zend_parse_parameters(ZEND_NUM_ARGS(), "s", &filename, &filename_len) == FAILURE) {
       RETURN_FALSE;
   }

   file_handle.filename = filename;

   if (php_lint_script(&file_handle) != SUCCESS) {
	   RETURN_FALSE
   }

   RETURN_TRUE
}

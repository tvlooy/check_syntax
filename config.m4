PHP_ARG_ENABLE(check_syntax, whether to enable check_syntax extension,
[  --enable-check_syntax   Enable check_syntax extension])

if test "$PHP_CHECK_SYNTAX" != "no"; then
  PHP_NEW_EXTENSION(check_syntax, check_syntax.c, $ext_shared)
fi


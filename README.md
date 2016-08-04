# PHP check_syntax extension

Once, PHP had a ```php_check_syntax``` function, but it was removed somewhere in 5.0.
See [https://github.com/php/php-src/commit/84c1e20749762e7f42bd02edb196dbe5fe6d510b](https://github.com/php/php-src/commit/84c1e20749762e7f42bd02edb196dbe5fe6d510b).

If you want to check a PHP file's syntax you rely on ```php -l```. But that is really slow because of forking etc.

## Features

```check_syntax('some-file.php')``` will return true or false.


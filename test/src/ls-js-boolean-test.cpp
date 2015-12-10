
#include "ls-js-null.hpp"
#include "ls-js-number.hpp"
#include "ls-js-boolean.hpp"
#include "ls-js-string.hpp"

int main()
{
  #define LS_JS_OBJECT Boolean
  #include "../include/test.hpp"
  
  return 0;
}





#include "ls-js-null.hpp"
#include "ls-js-number.hpp"
#include "ls-js-boolean.hpp"
#include "ls-js-string.hpp"

int main()
{
#define LS_JS_OBJECT String
#include "../include/test.hpp"
LS_JS_TEST(LS_JS_OBJECT,s1,( "non-numeric" ))
LS_JS_TEST(LS_JS_OBJECT,s2,( "21 lines of code in this file (not counting empty lines)" ))
  
  return 0;
}




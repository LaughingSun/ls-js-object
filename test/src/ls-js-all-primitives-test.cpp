
#include "ls-js-null.hpp"
#include "ls-js-number.hpp"
#include "ls-js-boolean.hpp"
#include "ls-js-string.hpp"


int main()
{
#define LS_JS_OBJECT Null
#include "../include/test.hpp"
#undef LS_JS_OBJECT
  
#define LS_JS_OBJECT Number
#include "../include/test.hpp"
#undef LS_JS_OBJECT
  
#define LS_JS_OBJECT String
#include "../include/test.hpp"
LS_JS_TEST(LS_JS_OBJECT,s1,( "non-numeric" ))
LS_JS_TEST(LS_JS_OBJECT,s2,( "21 lines of code in this file (not counting empty lines)" ))
#undef LS_JS_OBJECT

#define LS_JS_OBJECT Boolean
#include "../include/test.hpp"
#undef LS_JS_OBJECT
  
  return 0;
}




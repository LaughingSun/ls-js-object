#ifndef LS_JS_STRING_HPP
#define LS_JS_STRING_HPP

#include <cstdlib>
#include <cstring>
#include <exception>
#include <type_traits>
#include <iostream>
#include <sstream>
#include <string>

namespace ls
{

  namespace js
  {
    
    class String
    {

protected:
      
      const std::string _True = "true";
      const std::string _False = "false";
      
      std::string _val;
        
public:
      
      String ( std::string val="" ) : _val(val) {
      }
      
      String ( const char* val ) : _val(std::string(val)) {
      }
      
      String ( bool val ) : _val("") {
        _val = std::string( val ? "true" : "false" );
      }
      
      String ( char val ) : _val("") {
        _val.push_back( val );
      }
      
      template <typename T>
      String (T val, typename std::enable_if<std::is_arithmetic<T>::value, T>::type=0) {
        std::stringstream ss;
        ss << val;
        _val = ss.str();
      }

      explicit operator const char* () {
        return _val.c_str();
      }  
      
      explicit operator char* () {
        return (char*)_val.c_str();
      }
      
      operator std::string () {
        return _val;
      }
      
    };  // String
    
    std::ostream& operator<< ( std::ostream& os, String &val )
    {
        os << (std::string)val;
        return os;
    }
    
  };  // namespace js

};  // namespace ls

#endif // LS_JS_STRING_HPP


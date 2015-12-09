#ifndef LS_JS_BOOLEAN_HPP
#define LS_JS_BOOLEAN_HPP

#include <cstdlib>
#include <cstring>
#include <exception>
#include <type_traits>
#include <iostream>
#include <string>

namespace ls
{

  namespace js
  {
    
    class Boolean
    {

    protected:
      
      const std::string _True = "true";
      const std::string _False = "false";
      
      bool _val;
        
    public:
      
      Boolean ( bool val=false ) : _val(val) {
      }
      
      template <typename T>
      Boolean ( T val, typename std::enable_if<std::is_arithmetic<T>::value, T>::type=0 ) {
        _val = val;
      }

      Boolean ( std::string val ) : _val(false) {
        if ( _True == val ) _val = true;
      }
      
      explicit operator std::string() {
        return _val ? _True : _False;
      }  
      
      explicit operator const char*() {
        return (_val ? _True : _False).c_str();
      }  
      
      operator bool() {
        return _val;
      }  
      
    };  // Boolean (arithmetic)

    std::ostream& operator<< ( std::ostream& os, Boolean &val )
    {
        os << (std::string)val;
        return os;
    }
    
  };  // namespace js

};  // namespace ls

#endif  // LS_JS_BOOLEAN_HPP


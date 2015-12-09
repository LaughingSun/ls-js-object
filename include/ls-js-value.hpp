
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
    
    typedef enum {
      v_null
      , v_string
      , v_number
      , v_boolean
      , v_object
      , v_array
    } Type;
    
    class Value
    {

    protected:
      
    static const char* typeof_cstr[] = {
      "null"
      , "string"
      , "number"
      , "boolean"
      , "object"
      , "array"
    };
      
    Type _type;
    bool is_float;
    union {
      String string_;
      Number<long> number_int;    // maybe we can use templates to cover is_arithmetic
      Number<double> number_float;
      bool boolean_;
    } _val;
        
    public:
      
      Value ( ) : _val(0) {
        _type = v_null;
      }
      
      Value ( Value val ) : _val(val) {
        _type = val.type( );
      }
      
      String ( std::string val="" ) : _val(val) {
      }
      
      String ( const char* val ) : _val(std::string(val)) {
      }
      
      String ( char* val ) : _val(std::string(val)) {
      }
      
      
      Value ( string val=false ) : _val(val) {
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
      
    };  // Value (arithmetic)

    std::ostream& operator<< ( std::ostream& os, Value &val )
    {
        os << (std::string)val;
        return os;
    }
    
  };  // namespace js

};  // namespace ls



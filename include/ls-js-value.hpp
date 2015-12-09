/*

Copyright (c) <2015> <Erich Horn and LaughingSun>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE


 */



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



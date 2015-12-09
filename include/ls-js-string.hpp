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


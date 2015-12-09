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


#ifndef LS_JS_NATIVE_HPP
#define LS_JS_NATIVE_HPP

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
    
    using integral_t = long;
    using floating_point_t = double;
    
    enum number_type {
      t_integral
      , t_floating_point
    };
    
    static const char* cstr_integral = "integral";
    static const char* cstr_floating_point = "floating_point";
    
    using number_value_t = struct number_value {
    
      enum number_type type;
      
      union {
        integral_t integral;
        floating_point_t floating_point;
      } value;
      
      number_value ( ) {
        type = t_integral;
        value.integral = 0;
//        std::cout << "number_value ( )" << std::endl;
      }

      template <typename T>
      number_value ( T val, typename std::enable_if<std::is_integral<T>::value, T>::type=0 ) {
        type = t_integral;
        value.integral = val;
//        std::cout << "number_value ( T val, typename std::enable_if<std::is_integral<T>::value, T>::type=0 )" << std::endl;
      }

      template <typename T>
      number_value ( T val, typename std::enable_if<std::is_floating_point<T>::value, T>::type=0 ) {
        type = t_floating_point;
        value.floating_point = val;
//        std::cout << "number_value ( T val, typename std::enable_if<std::is_floating_point<T>::value, T>::type=0 )" << std::endl;
      }

      number_value ( std::string str ) {
        size_t idx = 0;
        double val = std::stod( str, &idx );
        long lval = long(val);
        if ( val == double(lval) ) {
          type = t_integral;
          value.integral = lval;
        } else {
          type = t_floating_point;
          value.floating_point = val;
        }
      }

      operator std::string ( ) {
        std::stringstream ss;
        ss << ( ( type == t_integral ) ? value.integral : value.floating_point );
        return ss.str( );
      }  
    
      const char* gettype () {
        return ( type == t_integral ) ? cstr_integral : cstr_floating_point;
      }
      
    }; // using number_value_t = struct number_value
    
    std::ostream& operator<< ( std::ostream& os, number_value &val )
    {
//      std::cout << "std::ostream& operator<< ( std::ostream& os, number_value &val )" << std::endl;
      os << ( ( val.type == t_integral ) 
          ? val.value.integral : val.value.floating_point );
      return os;
    }
    
    class Number
    {

    protected:
      
      number_value_t  _val;
        
    public:
      
      Number ( ) : _val( 0 ) {
      }
      
      Number ( std::string val ) : _val( val ) {
      }
      
      Number ( const char* val ) : _val( std::string( val ) ) {
      }
      
      Number ( char* val ) : _val( std::string( val ) ) {
      }
      
      template <typename T>
      Number ( T val, typename std::enable_if<std::is_arithmetic<T>::value, T>::type=0 ) : _val( val ) {
      }

      operator std::string ( ) {
        return std::string( _val );
      }  
      
    };  // Number

    std::ostream& operator<< ( std::ostream& os, Number &val )
    {
        os << std::string( val );
        return os;
    }
    
  };  // namespace js

};  // namespace ls

#endif  // LS_JS_NATIVE_HPP


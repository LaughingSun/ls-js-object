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


#ifndef LS_JS_NUMBER_HPP
#define LS_JS_NUMBER_HPP

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
    
    class Number
    {

    public:
      
      enum number_type {
        t_integral
        , t_floating_point
      };
      
      union number_value {
        integral_t _integral;
        floating_point_t _floating_point;
        
      };
      
      Number ( ) : _value( { ._integral = 0 } ), _type( t_integral ) {
        std::cout << "Number ( ): integral_t " << _value._integral << std::endl;
      }
      
      Number ( std::string val ) : _value( { ._integral = 0 } ), _type( t_integral ) {
        floating_point_t f = std::stod( val );
        integral_t       i = std::stol( val );
        if ( f == i ) {
          _value._integral = i;
        } else {
          _value._floating_point = f;
          _type = t_floating_point;
        }
      }
      
      Number ( Number& val ) : _value( { ._integral = 0 } ), _type( t_integral ) {
        if ( val.type() == Number::t_floating_point ) {
          _value._integral = val.get_integral( );
        } else {
          _value._floating_point = val.get_floating_point( );
          _type = t_floating_point;
        }
      }
      
      template <typename T>
      explicit Number ( T val=0, typename std::enable_if<std::is_integral<T>::value, T>::type=0 )
          : _value( { ._integral = val } ), _type( t_integral ) {
        std::cout << "Number ( " << val << " ): " << _value._integral << std::endl;
      }

      template <typename T>
      explicit Number ( T val, typename std::enable_if<std::is_floating_point<T>::value, T>::type=0 )
          : _value( { ._floating_point = val } ), _type( t_floating_point ) {
        std::cout << "Number ( " << val << " ): " << _value._floating_point << std::endl;
      }

      operator std::string ( ) {
        std::stringstream ss;
        ss << ( ( _type == t_floating_point ) 
            ? _value._floating_point : _value._integral );
        return ss.str();
      }  
      
//      template <typename T, typename std::enable_if<std::is_arithmetic<T>::value, T>::type=0>
//      explicit operator const T ( ) const {
//        return ( _type == t_floating_point ) 
//            ? _value._floating_point : _value._integral;
//      }
      
      template <typename T, typename std::enable_if<std::is_integral<T>::value, T>::type=0>
      explicit operator T ( ) const {
        return ( _type == t_floating_point ) 
            ? _value._floating_point : _value._integral;
      }
      
      explicit operator float ( ) const {
        return ( _type == t_floating_point ) 
            ? _value._floating_point : _value._integral;
      }
      
      explicit operator double ( ) const {
        return ( _type == t_floating_point ) 
            ? _value._floating_point : _value._integral;
      }
      
      integral_t get_integral ( ) {
        return ( _type == t_floating_point ) 
            ? _value._floating_point : _value._integral;
      }
      
      floating_point_t get_floating_point ( ) {
        return ( _type == t_floating_point ) 
            ? _value._floating_point : _value._integral;
      }
      
      enum number_type type () {
        return _type;
      }
      
      const char* gettype () {
        return types_cstr_list[_type];
      }
      
private:
      
      union number_value  _value;
      enum number_type _type;
      
      static const char* t_integral_cstr;
      static const char* t_floating_point_cstr;
      
      static const char* types_cstr_list[];
      
    };  // Number

    const char* Number::t_integral_cstr      = "null";
    const char* Number::t_floating_point_cstr   = "boolean";
    
    const char* Number::types_cstr_list[] = {
      t_integral_cstr
      , t_floating_point_cstr
    };
    
    std::ostream& operator<< ( std::ostream& os, Number &val )
    {
        os << ( ( val.type() == Number::t_floating_point ) 
            ? val.get_floating_point( ) : val.get_integral( ) );
        return os;
    }
    
  };  // namespace js

};  // namespace ls

#endif  // LS_JS_NUMBER_HPP


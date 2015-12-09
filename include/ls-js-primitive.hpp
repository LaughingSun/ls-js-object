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


#ifndef LS_JS_PRIMITIVE_HPP
#define LS_JS_PRIMITIVE_HPP

#include <cstdlib>
#include <cstring>
#include <exception>
#include <type_traits>
#include <iostream>
#include <sstream>
#include <string>

#include "ls-js-null.hpp"
#include "ls-js-boolean.hpp"
#include "ls-js-number.hpp"
#include "ls-js-string.hpp"

namespace ls
{

  namespace js
  {
    
    class Primitive
    {

public:
      
      enum primitive_type {
        t_null
        , t_boolean
        , t_number
        , t_string
      };
      
      union primitive_value {
        Null    _null;
        Boolean _boolean;
        Number  _number;
        String  _string;
        
        primitive_value ( ) : _null( null ) { }
        primitive_value ( Null val ) : _null( val ) { }
        primitive_value ( Boolean val ) : _boolean( val ) { }
        primitive_value ( Number val ) : _number( val ) { }
        primitive_value ( String val ) : _string( val ) { }
        
      };
      
      Primitive ( ) {
        _value( null );
      }

//      Primitive ( Null val ) : _type( t_null ) {
//        _type = t_null;
//      }

//      Primitive ( Boolean val ) {
//        _type = t_boolean;
//        value.boolean_ = val;
//      }

//      Primitive ( Number val ) {
//        _type = t_number;
//        value.number_ = val;
//      }

//      Primitive ( String val ) {
//        _type = t_string;
//        value.string_ = val;
//      }

//      Primitive ( bool val ) {
//        _type = t_boolean;
//        value.boolean_( val );
//      }
        
//      template <typename T>
//      Primitive ( T val, typename std::enable_if<std::is_arithmetic<T>::value, T>::type=0 ) {
//        _type = t_number;
//        value.number_( val );
//      }
        
//      Primitive ( std::string val ) {
//        _type = t_string;
//        value.string_( val );
//      }
//      
//      Primitive ( const char* val ) {
//        _type = t_string;
//        value.string_( val );
//      }
//      
//      operator std::string ( ) {
//        switch ( _type ) {
//          case t_undefined: return std::string( null );
//          case t_null: return std::string( null );
//          case t_boolean: return std::string( value.boolean_ );
//          case t_number: return std::string( value.number_ );
//          case t_string: return std::string( value.string_ );
//        }
//        throw std::invalid_argument( "should never have happened error, things are corrupted" );
//      }
//    
      enum primitive_type type () {
        return _type;
      }
      
      const char* gettype () {
        return types_cstr_list[_type];
      }
      
private:
      
      union primitive_value _value;
      enum primitive_type  _type;
      
      static const char* t_null_cstr;
      static const char* t_boolean_cstr;
      static const char* t_number_cstr;
      static const char* t_string_cstr;
      
      static const char* types_cstr_list[];
      
    };  // class Primitive
    
    const char* Primitive::t_null_cstr      = "null";
    const char* Primitive::t_boolean_cstr   = "boolean";
    const char* Primitive::t_number_cstr    = "number";
    const char* Primitive::t_string_cstr    = "string";
    
    const char* Primitive::types_cstr_list[] = {
      t_null_cstr
      , t_boolean_cstr
      , t_number_cstr
      , t_string_cstr
    };
      
//    std::ostream& operator<< ( std::ostream& os, Primitive &val )
//    {
//      os << std::string( val );
//      return os;
//    }
    
  };  // namespace js

};  // namespace ls

#endif  // LS_JS_PRIMITIVE_HPP


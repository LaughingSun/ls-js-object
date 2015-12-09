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


#ifndef LS_JS_NULL_HPP
#define LS_JS_NULL_HPP

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
    
    class Null
    {

public:
      
      static constexpr const char* _Null_cstr = "null";
      static constexpr const int _Null_valueof = 0;
      
      Null ( ) {
      }
      
      template <typename T>
      Null ( T ) {
      }
      
      operator std::string ( ) const {
        return _Null_cstr;
      }
      
      template <typename T, typename std::enable_if<std::is_arithmetic<T>::value, T>::type=0>
      explicit operator const T ( ) const {
        return _Null_valueof;
      }
      
      explicit operator float ( ) const {
        return (float)_Null_valueof;
      }
      
      explicit operator double ( ) const {
        return (double)_Null_valueof;
      }
      
      
    };  // Null

    static const Null null;    // but this is THE null everyone talks about
    
    std::ostream& operator<< ( std::ostream& os, const Null &val )
    {
//        std::cout << "std::ostream& operator<< ( std::ostream& os, const Null &val )" << std::endl;
        os << Null::_Null_valueof;
        return os;
    }
    
    
  };  // namespace js

};  // namespace ls

#endif  // LS_JS_NULL_HPP


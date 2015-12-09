
#include "ls-js-number.hpp"

int main()
{
  using namespace ls::js;
  
  Number  a0;
  
  Number  a1( false );
  Number  a2( true );
  
  Number  a3( '\0' );
  Number  a4( '4' );
  
  Number  a5( char( 5 ) );
  Number  a6( short( 6 ) );
  Number  a7( int( 7 ) );
  Number  a8( long( 8 ) );
  
  Number  a9( float( 9.5 ) );
  Number  a10( double( 10.5 ) );
  
  Number  a11( "11" );
  Number  a12( "12.5" );
  
  Number  a13( std::string( "13" ) );
  Number  a14( std::string( "14.5" ) );
  
  std::cout << "a0 => " << a0 << ", sizeof( a0 ) => " << sizeof( a0 ) << std::endl;
  std::cout << "a1 => " << a1 << ", sizeof( a1 ) => " << sizeof( a1 ) << std::endl;
  std::cout << "a2 => " << a2 << ", sizeof( a2 ) => " << sizeof( a2 ) << std::endl;
  std::cout << "a3 => " << a3 << ", sizeof( a3 ) => " << sizeof( a3 ) << std::endl;
  std::cout << "a4 => " << a4 << ", sizeof( a4 ) => " << sizeof( a4 ) << std::endl;
  std::cout << "a5 => " << a5 << ", sizeof( a5 ) => " << sizeof( a5 ) << std::endl;
  std::cout << "a6 => " << a6 << ", sizeof( a6 ) => " << sizeof( a6 ) << std::endl;
  std::cout << "a7 => " << a7 << ", sizeof( a7 ) => " << sizeof( a7 ) << std::endl;
  std::cout << "a8 => " << a8 << ", sizeof( a8 ) => " << sizeof( a8 ) << std::endl;
  std::cout << "a9 => " << a9 << ", sizeof( a9 ) => " << sizeof( a9 ) << std::endl;
  std::cout << "a10 => " << a10 << ", sizeof( a10 ) => " << sizeof( a10 ) << std::endl;
  std::cout << "a11 => " << a11 << ", sizeof( a11 ) => " << sizeof( a11 ) << std::endl;
  std::cout << "a12 => " << a12 << ", sizeof( a12 ) => " << sizeof( a12 ) << std::endl;
  std::cout << "a13 => " << a13 << ", sizeof( a13 ) => " << sizeof( a13 ) << std::endl;
  std::cout << "a14 => " << a14 << ", sizeof( a14 ) => " << sizeof( a14 ) << std::endl;
  
  std::cout << "std::string( a0 ) => " << std::string( a0 ) << std::endl;
  std::cout << "std::string( a1 ) => " << std::string( a1 ) << std::endl;
  std::cout << "std::string( a2 ) => " << std::string( a2 ) << std::endl;
  std::cout << "std::string( a3 ) => " << std::string( a3 ) << std::endl;
  std::cout << "std::string( a4 ) => " << std::string( a4 ) << std::endl;
  std::cout << "std::string( a5 ) => " << std::string( a5 ) << std::endl;
  std::cout << "std::string( a6 ) => " << std::string( a6 ) << std::endl;
  std::cout << "std::string( a7 ) => " << std::string( a7 ) << std::endl;
  std::cout << "std::string( a8 ) => " << std::string( a8 ) << std::endl;
  std::cout << "std::string( a9 ) => " << std::string( a9 ) << std::endl;
  std::cout << "std::string( a10 ) => " << std::string( a10 ) << std::endl;
  std::cout << "std::string( a11 ) => " << std::string( a11 ) << std::endl;
  std::cout << "std::string( a12 ) => " << std::string( a12 ) << std::endl;
  std::cout << "std::string( a13 ) => " << std::string( a13 ) << std::endl;
  std::cout << "std::string( a14 ) => " << std::string( a14 ) << std::endl;
  
  Number* ap = new Number( );
  Number* a0p = new Number;
  
  Number* a1p = new Number( false );
  Number* a2p = new Number( true );
  
  Number* a3p = new Number( '\0' );
  Number* a4p = new Number( '4' );
  
  Number* a5p = new Number( char( 5 ) );
  Number* a6p = new Number( short( 6 ) );
  Number* a7p = new Number( int( 7 ) );
  Number* a8p = new Number( long( 8 ) );
  
  Number* a9p = new Number( float( 9.5 ) );
  Number* a10p = new Number( double( 10.5 ) );
  
  Number* a11p = new Number( "11" );
  Number* a12p = new Number( "12.5" );
  
  Number* a13p = new Number( std::string( "13" ) );
  Number* a14p = new Number( std::string( "14.5" ) );
  
  std::cout << "*ap => " << *ap << std::endl;
  std::cout << "*a0p => " << *a0p << std::endl;
  std::cout << "*a1p => " << *a1p << std::endl;
  std::cout << "*a2p => " << *a2p << std::endl;
  std::cout << "*a3p => " << *a3p << std::endl;
  std::cout << "*a4p => " << *a4p << std::endl;
  std::cout << "*a5p => " << *a5p << std::endl;
  std::cout << "*a6p => " << *a6p << std::endl;
  std::cout << "*a7p => " << *a7p << std::endl;
  std::cout << "*a8p => " << *a8p << std::endl;
  std::cout << "*a9p => " << *a9p << std::endl;
  std::cout << "*a10p => " << *a10p << std::endl;
  std::cout << "*a11p => " << *a11p << std::endl;
  std::cout << "*a12p => " << *a12p << std::endl;
  std::cout << "*a13p => " << *a13p << std::endl;
  std::cout << "*a14p => " << *a14p << std::endl;
  
  std::cout << "std::string( *ap ) => " << std::string( *ap ) << std::endl;
  std::cout << "std::string( *a1p ) => " << std::string( *a1p ) << std::endl;
  std::cout << "std::string( *a2p ) => " << std::string( *a2p ) << std::endl;
  std::cout << "std::string( *a3p ) => " << std::string( *a3p ) << std::endl;
  std::cout << "std::string( *a4p ) => " << std::string( *a4p ) << std::endl;
  std::cout << "std::string( *a5p ) => " << std::string( *a5p ) << std::endl;
  std::cout << "std::string( *a6p ) => " << std::string( *a6p ) << std::endl;
  std::cout << "std::string( *a7p ) => " << std::string( *a7p ) << std::endl;
  std::cout << "std::string( *a8p ) => " << std::string( *a8p ) << std::endl;
  std::cout << "std::string( *a9p ) => " << std::string( *a9p ) << std::endl;
  std::cout << "std::string( *a10p ) => " << std::string( *a10p ) << std::endl;
  std::cout << "std::string( *a11p ) => " << std::string( *a11p ) << std::endl;
  std::cout << "std::string( *a12p ) => " << std::string( *a12p ) << std::endl;
  std::cout << "std::string( *a13p ) => " << std::string( *a13p ) << std::endl;
  std::cout << "std::string( *a14p ) => " << std::string( *a14p ) << std::endl;
  
  return 0;
}




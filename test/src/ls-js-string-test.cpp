
#include "ls-js-string.hpp"

int main()
{
  using namespace ls::js;
  
  String  a0;
  
  String  a1( false );
  String  a2( true );
  
  String  a3( '\0' );
  String  a4( '4' );
  
  String  a5( char( 5 ) );
  String  a6( short( 6 ) );
  String  a7( int( 7 ) );
  String  a8( long( 8 ) );
  
  String  a9( float( 9.5 ) );
  String  a10( double( 10.5 ) );
  
  String  a11( "11" );
  String  a12( "12.5" );
  
  String  a13( std::string( "13" ) );
  String  a14( std::string( "14.5" ) );
  
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
  
  String* ap = new String( );
  String* a0p = new String;
  
  String* a1p = new String( false );
  String* a2p = new String( true );
  
  String* a3p = new String( '\0' );
  String* a4p = new String( '4' );
  
  String* a5p = new String( char( 5 ) );
  String* a6p = new String( short( 6 ) );
  String* a7p = new String( int( 7 ) );
  String* a8p = new String( long( 8 ) );
  
  String* a9p = new String( float( 9.5 ) );
  String* a10p = new String( double( 10.5 ) );
  
  String* a11p = new String( "11" );
  String* a12p = new String( "12.5" );
  
  String* a13p = new String( std::string( "13" ) );
  String* a14p = new String( std::string( "14.5" ) );
  
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




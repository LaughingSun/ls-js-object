
#include "ls-js-null.hpp"

int main()
{
  using namespace ls::js;
  
  Null  a0;
  
  Null  a1( false );
  Null  a2( true );
  
  Null  a3( '\0' );
  Null  a4( '4' );
  
  Null  a5( char( 5 ) );
  Null  a6( short( 6 ) );
  Null  a7( int( 7 ) );
  Null  a8( long( 8 ) );
  
  Null  a9( float( 9.5 ) );
  Null  a10( double( 10.5 ) );
  
  Null  a11( "11" );
  Null  a12( "12.5" );
  
  Null  a13( std::string( "13" ) );
  Null  a14( std::string( "14.5" ) );
  
  std::cout << "a0 => " << a0 << std::endl;
  std::cout << "a1 => " << a1 << std::endl;
  std::cout << "a2 => " << a2 << std::endl;
  std::cout << "a3 => " << a3 << std::endl;
  std::cout << "a4 => " << a4 << std::endl;
  std::cout << "a5 => " << a5 << std::endl;
  std::cout << "a6 => " << a6 << std::endl;
  std::cout << "a7 => " << a7 << std::endl;
  std::cout << "a8 => " << a8 << std::endl;
  std::cout << "a9 => " << a9 << std::endl;
  std::cout << "a10 => " << a10 << std::endl;
  std::cout << "a11 => " << a11 << std::endl;
  std::cout << "a12 => " << a12 << std::endl;
  std::cout << "a13 => " << a13 << std::endl;
  std::cout << "a14 => " << a14 << std::endl;
  
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
  
  Null* ap = new Null( );
  Null* a0p = new Null;
  
  Null* a1p = new Null( false );
  Null* a2p = new Null( true );
  
  Null* a3p = new Null( '\0' );
  Null* a4p = new Null( '4' );
  
  Null* a5p = new Null( char( 5 ) );
  Null* a6p = new Null( short( 6 ) );
  Null* a7p = new Null( int( 7 ) );
  Null* a8p = new Null( long( 8 ) );
  
  Null* a9p = new Null( float( 9.5 ) );
  Null* a10p = new Null( double( 10.5 ) );
  
  Null* a11p = new Null( "11" );
  Null* a12p = new Null( "12.5" );
  
  Null* a13p = new Null( std::string( "13" ) );
  Null* a14p = new Null( std::string( "14.5" ) );
  
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




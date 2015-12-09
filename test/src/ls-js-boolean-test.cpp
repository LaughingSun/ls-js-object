
#include "ls-js-boolean.hpp"

int main()
{
  using namespace ls::js;
  
  Boolean  a0;
  
  Boolean  a1( false );
  Boolean  a2( true );
  
  Boolean  a3( '\0' );
  Boolean  a4( '4' );
  
  Boolean  a5( char( 5 ) );
  Boolean  a6( short( 6 ) );
  Boolean  a7( int( 7 ) );
  Boolean  a8( long( 8 ) );
  
  Boolean  a9( float( 9.5 ) );
  Boolean  a10( double( 10.5 ) );
  
  Boolean  a11( "11" );
  Boolean  a12( "12.5" );
  
  Boolean  a13( std::string( "13" ) );
  Boolean  a14( std::string( "14.5" ) );
  
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
  
  Boolean* ap = new Boolean( );
  Boolean* a0p = new Boolean;
  
  Boolean* a1p = new Boolean( false );
  Boolean* a2p = new Boolean( true );
  
  Boolean* a3p = new Boolean( '\0' );
  Boolean* a4p = new Boolean( '4' );
  
  Boolean* a5p = new Boolean( char( 5 ) );
  Boolean* a6p = new Boolean( short( 6 ) );
  Boolean* a7p = new Boolean( int( 7 ) );
  Boolean* a8p = new Boolean( long( 8 ) );
  
  Boolean* a9p = new Boolean( float( 9.5 ) );
  Boolean* a10p = new Boolean( double( 10.5 ) );
  
  Boolean* a11p = new Boolean( "11" );
  Boolean* a12p = new Boolean( "12.5" );
  
  Boolean* a13p = new Boolean( std::string( "13" ) );
  Boolean* a14p = new Boolean( std::string( "14.5" ) );
  
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




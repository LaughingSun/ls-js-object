
#include "ls-js-primitive.hpp"

int
main () {
  
  using namespace ls::js;

  Primitive p0;
  std::cout << "p0 => " << p0 << "(type: " << p0.gettype( ) << ", stringified: " << p0.stringify( ) << ")" << std::endl;
  
  Primitive p1( null );
  std::cout << "p1 => " << p1 << "(type: " << p1.gettype( ) << ", stringified: " << p1.stringify( ) << ")" << std::endl;
  Primitive p2( false );
  std::cout << "p2 => " << p2 << "(type: " << p2.gettype( ) << ", stringified: " << p2.stringify( ) << ")" << std::endl;
  Primitive p3( true );
  std::cout << "p3 => " << p3 << "(type: " << p3.gettype( ) << ", stringified: " << p3.stringify( ) << ")" << std::endl;
  Primitive p4( 4 );
  std::cout << "p4 => " << p4 << "(type: " << p4.gettype( ) << ", stringified: " << p4.stringify( ) << ")" << std::endl;
  Primitive p5( char( 5 ) );
  std::cout << "p5 => " << p5 << "(type: " << p5.gettype( ) << ", stringified: " << p5.stringify( ) << ")" << std::endl;
  Primitive p6( short( 6 ) );
  std::cout << "p6 => " << p6 << "(type: " << p6.gettype( ) << ", stringified: " << p6.stringify( ) << ")" << std::endl;
  Primitive p7( int( 7 ) );
  std::cout << "p7 => " << p7 << "(type: " << p7.gettype( ) << ", stringified: " << p7.stringify( ) << ")" << std::endl;
  Primitive p8( long( 8 ) );
  std::cout << "p8 => " << p8 << "(type: " << p8.gettype( ) << ", stringified: " << p8.stringify( ) << ")" << std::endl;
  Primitive p9( float( 9.1 ) );
  std::cout << "p9 => " << p9 << "(type: " << p9.gettype( ) << ", stringified: " << p9.stringify( ) << ")" << std::endl;
  Primitive p10( double( 10.2 ) );
  std::cout << "p10 => " << p10 << "(type: " << p10.gettype( ) << ", stringified: " << p10.stringify( ) << ")" << std::endl;
  Primitive p11( std::string( "a string" ) );
  std::cout << "p11 => " << p11 << "(type: " << p11.gettype( ) << ", stringified: " << p11.stringify( ) << ")" << std::endl;
  Primitive p12( "a cstring" );
  std::cout << "p12 => " << p12 << "(type: " << p12.gettype( ) << ", stringified: " << p12.stringify( ) << ")" << std::endl;
  Primitive p13( std::string( "1st numerical string" ) );
  std::cout << "p13 => " << p13 << "(type: " << p13.gettype( ) << ", stringified: " << p13.stringify( ) << ")" << std::endl;
  Primitive p14( "2nd numerical cstring" );
  std::cout << "p14 => " << p14 << "(type: " << p14.gettype( ) << ", stringified: " << p14.stringify( ) << ")" << std::endl;

  Primitive p15( Null( 0 ) );
  std::cout << "p15 => " << p15 << "(type: " << p15.gettype( ) << ", stringified: " << p15.stringify( ) << ")" << std::endl;
  
  Primitive p16( new Boolean( ) );
  std::cout << "p16 => " << p16 << "(type: " << p16.gettype( ) << ", stringified: " << p16.stringify( ) << ")" << std::endl;
  Primitive p17( new Boolean( true ) );
  std::cout << "p17 => " << p17 << "(type: " << p17.gettype( ) << ", stringified: " << p17.stringify( ) << ")" << std::endl;
  
  Primitive p18( new Number( char( 1 ) ) );
  std::cout << "p18 => " << p18 << "(type: " << p18.gettype( ) << ", stringified: " << p18.stringify( ) << ")" << std::endl;
  Primitive p19( new Number( short( 2 ) ) );
  std::cout << "p19 => " << p19 << "(type: " << p19.gettype( ) << ", stringified: " << p19.stringify( ) << ")" << std::endl;
  Primitive p20( new Number( int( 4 ) ) );
  std::cout << "p20 => " << p20 << "(type: " << p20.gettype( ) << ", stringified: " << p20.stringify( ) << ")" << std::endl;
  Primitive p21( new Number( long( 8.32 ) ) );
  std::cout << "p21 => " << p21 << "(type: " << p21.gettype( ) << ", stringified: " << p21.stringify( ) << ")" << std::endl;
  Primitive p22( new Number( float( 8.64 ) ) );
  std::cout << "p22 => " << p22 << "(type: " << p22.gettype( ) << ", stringified: " << p22.stringify( ) << ")" << std::endl;
  Primitive p23( new Number( 16.128 ) );
  std::cout << "p23 => " << p23 << "(type: " << p23.gettype( ) << ", stringified: " << p23.stringify( ) << ")" << std::endl;
  
  Primitive p24( new String( std::string( "have some depth here" ) ) );
  std::cout << "p24 => " << p24 << "(type: " << p24.gettype( ) << ", stringified: " << p24.stringify( ) << ")" << std::endl;
  Primitive p25( new String( "not as much \"depth\"" ) );
  std::cout << "p25 => " << p25 << "(type: " << p25.gettype( ) << ", stringified: " << p25.stringify( ) << ")" << std::endl;
  Primitive p26( new String( "3.1415926535" ) );
  std::cout << "p26 => " << p26 << "(type: " << p26.gettype( ) << ", stringified: " << p26.stringify( ) << ")" << std::endl;
  Primitive p27( new String( "true" ) );
  std::cout << "p27 => " << p27 << "(type: " << p27.gettype( ) << ", stringified: " << p27.stringify( ) << ")" << std::endl;
  
//#define LS_JS_OBJECT Primitive
//#include "../include/test.hpp"

  return 0;
}


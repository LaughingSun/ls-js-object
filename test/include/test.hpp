
#ifndef LS_JS_OBJECT
# error please define LS_JS_OBJECT as a ls::js:: object type
#endif

void test ( ) {

  using namespace ls::js;
  
  LS_JS_OBJECT  a0;
  
  LS_JS_OBJECT  a1( false );
  LS_JS_OBJECT  a2( true );
  
  LS_JS_OBJECT  a3( '\0' );
  LS_JS_OBJECT  a4( '4' );
  
  LS_JS_OBJECT  a5( char( 5 ) );
  LS_JS_OBJECT  a6( short( 6 ) );
  LS_JS_OBJECT  a7( int( 7 ) );
  LS_JS_OBJECT  a8( long( 8 ) );
  
  LS_JS_OBJECT  a9( float( 9.5 ) );
  LS_JS_OBJECT  a10( double( 10.5 ) );
  
  LS_JS_OBJECT  a11( "11" );
  LS_JS_OBJECT  a12( "12.5" );
  
  LS_JS_OBJECT  a13( std::string( "13" ) );
  LS_JS_OBJECT  a14( std::string( "14.5" ) );
  
  LS_JS_OBJECT  a15( a0 );
  LS_JS_OBJECT  a16( a2 );
  
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
  std::cout << "a15 => " << a13 << ", sizeof( a15 ) => " << sizeof( a13 ) << std::endl;
  std::cout << "a16 => " << a14 << ", sizeof( a16 ) => " << sizeof( a14 ) << std::endl;
  
  LS_JS_OBJECT* ap = new LS_JS_OBJECT( );
  LS_JS_OBJECT* a0p = new LS_JS_OBJECT;
  
  LS_JS_OBJECT* a1p = new LS_JS_OBJECT( false );
  LS_JS_OBJECT* a2p = new LS_JS_OBJECT( true );
  
  LS_JS_OBJECT* a3p = new LS_JS_OBJECT( '\0' );
  LS_JS_OBJECT* a4p = new LS_JS_OBJECT( '4' );
  
  LS_JS_OBJECT* a5p = new LS_JS_OBJECT( char( 5 ) );
  LS_JS_OBJECT* a6p = new LS_JS_OBJECT( short( 6 ) );
  LS_JS_OBJECT* a7p = new LS_JS_OBJECT( int( 7 ) );
  LS_JS_OBJECT* a8p = new LS_JS_OBJECT( long( 8 ) );
  
  LS_JS_OBJECT* a9p = new LS_JS_OBJECT( float( 9.5 ) );
  LS_JS_OBJECT* a10p = new LS_JS_OBJECT( double( 10.5 ) );
  
  LS_JS_OBJECT* a11p = new LS_JS_OBJECT( "11" );
  LS_JS_OBJECT* a12p = new LS_JS_OBJECT( "12.5" );
  
  LS_JS_OBJECT* a13p = new LS_JS_OBJECT( std::string( "13" ) );
  LS_JS_OBJECT* a14p = new LS_JS_OBJECT( std::string( "14.5" ) );
  
  LS_JS_OBJECT*  a15p = new LS_JS_OBJECT( a0 );
  LS_JS_OBJECT*  a16p = new LS_JS_OBJECT( a2 );
  
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
  std::cout << "*a15p => " << *a15p << std::endl;
  std::cout << "*a16p => " << *a16p << std::endl;
  
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

  std::cout << "bool( a0 ) => " << bool( a0 ) << std::endl;
  std::cout << "bool( a1 ) => " << bool( a1 ) << std::endl;
  std::cout << "bool( a2 ) => " << bool( a2 ) << std::endl;
  std::cout << "bool( a3 ) => " << bool( a3 ) << std::endl;
  std::cout << "bool( a4 ) => " << bool( a4 ) << std::endl;
  std::cout << "bool( a5 ) => " << bool( a5 ) << std::endl;
  std::cout << "bool( a6 ) => " << bool( a6 ) << std::endl;
  std::cout << "bool( a7 ) => " << bool( a7 ) << std::endl;
  std::cout << "bool( a8 ) => " << bool( a8 ) << std::endl;
  std::cout << "bool( a9 ) => " << bool( a9 ) << std::endl;
  std::cout << "bool( a10 ) => " << bool( a10 ) << std::endl;
  std::cout << "bool( a11 ) => " << bool( a11 ) << std::endl;
  std::cout << "bool( a12 ) => " << bool( a12 ) << std::endl;
  std::cout << "bool( a13 ) => " << bool( a13 ) << std::endl;
  std::cout << "bool( a14 ) => " << bool( a14 ) << std::endl;
  
  std::cout << "char( a0 ) => " << char( a0 ) << std::endl;
  std::cout << "char( a1 ) => " << char( a1 ) << std::endl;
  std::cout << "char( a2 ) => " << char( a2 ) << std::endl;
  std::cout << "char( a3 ) => " << char( a3 ) << std::endl;
  std::cout << "char( a4 ) => " << char( a4 ) << std::endl;
  std::cout << "char( a5 ) => " << char( a5 ) << std::endl;
  std::cout << "char( a6 ) => " << char( a6 ) << std::endl;
  std::cout << "char( a7 ) => " << char( a7 ) << std::endl;
  std::cout << "char( a8 ) => " << char( a8 ) << std::endl;
  std::cout << "char( a9 ) => " << char( a9 ) << std::endl;
  std::cout << "char( a10 ) => " << char( a10 ) << std::endl;
  std::cout << "char( a11 ) => " << char( a11 ) << std::endl;
  std::cout << "char( a12 ) => " << char( a12 ) << std::endl;
  std::cout << "char( a13 ) => " << char( a13 ) << std::endl;
  std::cout << "char( a14 ) => " << char( a14 ) << std::endl;
  
  std::cout << "short( a0 ) => " << short( a0 ) << std::endl;
  std::cout << "short( a1 ) => " << short( a1 ) << std::endl;
  std::cout << "short( a2 ) => " << short( a2 ) << std::endl;
  std::cout << "short( a3 ) => " << short( a3 ) << std::endl;
  std::cout << "short( a4 ) => " << short( a4 ) << std::endl;
  std::cout << "short( a5 ) => " << short( a5 ) << std::endl;
  std::cout << "short( a6 ) => " << short( a6 ) << std::endl;
  std::cout << "short( a7 ) => " << short( a7 ) << std::endl;
  std::cout << "short( a8 ) => " << short( a8 ) << std::endl;
  std::cout << "short( a9 ) => " << short( a9 ) << std::endl;
  std::cout << "short( a10 ) => " << short( a10 ) << std::endl;
  std::cout << "short( a11 ) => " << short( a11 ) << std::endl;
  std::cout << "short( a12 ) => " << short( a12 ) << std::endl;
  std::cout << "short( a13 ) => " << short( a13 ) << std::endl;
  std::cout << "short( a14 ) => " << short( a14 ) << std::endl;
  
  std::cout << "int( a0 ) => " << int( a0 ) << std::endl;
  std::cout << "int( a1 ) => " << int( a1 ) << std::endl;
  std::cout << "int( a2 ) => " << int( a2 ) << std::endl;
  std::cout << "int( a3 ) => " << int( a3 ) << std::endl;
  std::cout << "int( a4 ) => " << int( a4 ) << std::endl;
  std::cout << "int( a5 ) => " << int( a5 ) << std::endl;
  std::cout << "int( a6 ) => " << int( a6 ) << std::endl;
  std::cout << "int( a7 ) => " << int( a7 ) << std::endl;
  std::cout << "int( a8 ) => " << int( a8 ) << std::endl;
  std::cout << "int( a9 ) => " << int( a9 ) << std::endl;
  std::cout << "int( a10 ) => " << int( a10 ) << std::endl;
  std::cout << "int( a11 ) => " << int( a11 ) << std::endl;
  std::cout << "int( a12 ) => " << int( a12 ) << std::endl;
  std::cout << "int( a13 ) => " << int( a13 ) << std::endl;
  std::cout << "int( a14 ) => " << int( a14 ) << std::endl;
  
  std::cout << "long( a0 ) => " << long( a0 ) << std::endl;
  std::cout << "long( a1 ) => " << long( a1 ) << std::endl;
  std::cout << "long( a2 ) => " << long( a2 ) << std::endl;
  std::cout << "long( a3 ) => " << long( a3 ) << std::endl;
  std::cout << "long( a4 ) => " << long( a4 ) << std::endl;
  std::cout << "long( a5 ) => " << long( a5 ) << std::endl;
  std::cout << "long( a6 ) => " << long( a6 ) << std::endl;
  std::cout << "long( a7 ) => " << long( a7 ) << std::endl;
  std::cout << "long( a8 ) => " << long( a8 ) << std::endl;
  std::cout << "long( a9 ) => " << long( a9 ) << std::endl;
  std::cout << "long( a10 ) => " << long( a10 ) << std::endl;
  std::cout << "long( a11 ) => " << long( a11 ) << std::endl;
  std::cout << "long( a12 ) => " << long( a12 ) << std::endl;
  std::cout << "long( a13 ) => " << long( a13 ) << std::endl;
  std::cout << "long( a14 ) => " << long( a14 ) << std::endl;
  
  std::cout << "float( a0 ) => " << float( a0 ) << std::endl;
  std::cout << "float( a1 ) => " << float( a1 ) << std::endl;
  std::cout << "float( a2 ) => " << float( a2 ) << std::endl;
  std::cout << "float( a3 ) => " << float( a3 ) << std::endl;
  std::cout << "float( a4 ) => " << float( a4 ) << std::endl;
  std::cout << "float( a5 ) => " << float( a5 ) << std::endl;
  std::cout << "float( a6 ) => " << float( a6 ) << std::endl;
  std::cout << "float( a7 ) => " << float( a7 ) << std::endl;
  std::cout << "float( a8 ) => " << float( a8 ) << std::endl;
  std::cout << "float( a9 ) => " << float( a9 ) << std::endl;
  std::cout << "float( a10 ) => " << float( a10 ) << std::endl;
  std::cout << "float( a11 ) => " << float( a11 ) << std::endl;
  std::cout << "float( a12 ) => " << float( a12 ) << std::endl;
  std::cout << "float( a13 ) => " << float( a13 ) << std::endl;
  std::cout << "float( a14 ) => " << float( a14 ) << std::endl;
  
  std::cout << "double( a0 ) => " << double( a0 ) << std::endl;
  std::cout << "double( a1 ) => " << double( a1 ) << std::endl;
  std::cout << "double( a2 ) => " << double( a2 ) << std::endl;
  std::cout << "double( a3 ) => " << double( a3 ) << std::endl;
  std::cout << "double( a4 ) => " << double( a4 ) << std::endl;
  std::cout << "double( a5 ) => " << double( a5 ) << std::endl;
  std::cout << "double( a6 ) => " << double( a6 ) << std::endl;
  std::cout << "double( a7 ) => " << double( a7 ) << std::endl;
  std::cout << "double( a8 ) => " << double( a8 ) << std::endl;
  std::cout << "double( a9 ) => " << double( a9 ) << std::endl;
  std::cout << "double( a10 ) => " << double( a10 ) << std::endl;
  std::cout << "double( a11 ) => " << double( a11 ) << std::endl;
  std::cout << "double( a12 ) => " << double( a12 ) << std::endl;
  std::cout << "double( a13 ) => " << double( a13 ) << std::endl;
  std::cout << "double( a14 ) => " << double( a14 ) << std::endl;
  
  std::cout << "std::string( *a0p ) => " << std::string( *a0p ) << std::endl;
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
  
  std::cout << "bool( *a0p ) => " << bool( *a0p ) << std::endl;
  std::cout << "bool( *a1p ) => " << bool( *a1p ) << std::endl;
  std::cout << "bool( *a2p ) => " << bool( *a2p ) << std::endl;
  std::cout << "bool( *a3p ) => " << bool( *a3p ) << std::endl;
  std::cout << "bool( *a4p ) => " << bool( *a4p ) << std::endl;
  std::cout << "bool( *a5p ) => " << bool( *a5p ) << std::endl;
  std::cout << "bool( *a6p ) => " << bool( *a6p ) << std::endl;
  std::cout << "bool( *a7p ) => " << bool( *a7p ) << std::endl;
  std::cout << "bool( *a8p ) => " << bool( *a8p ) << std::endl;
  std::cout << "bool( *a9p ) => " << bool( *a9p ) << std::endl;
  std::cout << "bool( *a10p ) => " << bool( *a10p ) << std::endl;
  std::cout << "bool( *a11p ) => " << bool( *a11p ) << std::endl;
  std::cout << "bool( *a12p ) => " << bool( *a12p ) << std::endl;
  std::cout << "bool( *a13p ) => " << bool( *a13p ) << std::endl;
  std::cout << "bool( *a14p ) => " << bool( *a14p ) << std::endl;
  
  std::cout << "char( *a0p ) => " << char( *a0p ) << std::endl;
  std::cout << "char( *a1p ) => " << char( *a1p ) << std::endl;
  std::cout << "char( *a2p ) => " << char( *a2p ) << std::endl;
  std::cout << "char( *a3p ) => " << char( *a3p ) << std::endl;
  std::cout << "char( *a4p ) => " << char( *a4p ) << std::endl;
  std::cout << "char( *a5p ) => " << char( *a5p ) << std::endl;
  std::cout << "char( *a6p ) => " << char( *a6p ) << std::endl;
  std::cout << "char( *a7p ) => " << char( *a7p ) << std::endl;
  std::cout << "char( *a8p ) => " << char( *a8p ) << std::endl;
  std::cout << "char( *a9p ) => " << char( *a9p ) << std::endl;
  std::cout << "char( *a10p ) => " << char( *a10p ) << std::endl;
  std::cout << "char( *a11p ) => " << char( *a11p ) << std::endl;
  std::cout << "char( *a12p ) => " << char( *a12p ) << std::endl;
  std::cout << "char( *a13p ) => " << char( *a13p ) << std::endl;
  std::cout << "char( *a14p ) => " << char( *a14p ) << std::endl;
  
  std::cout << "short( *a0p ) => " << short( *a0p ) << std::endl;
  std::cout << "short( *a1p ) => " << short( *a1p ) << std::endl;
  std::cout << "short( *a2p ) => " << short( *a2p ) << std::endl;
  std::cout << "short( *a3p ) => " << short( *a3p ) << std::endl;
  std::cout << "short( *a4p ) => " << short( *a4p ) << std::endl;
  std::cout << "short( *a5p ) => " << short( *a5p ) << std::endl;
  std::cout << "short( *a6p ) => " << short( *a6p ) << std::endl;
  std::cout << "short( *a7p ) => " << short( *a7p ) << std::endl;
  std::cout << "short( *a8p ) => " << short( *a8p ) << std::endl;
  std::cout << "short( *a9p ) => " << short( *a9p ) << std::endl;
  std::cout << "short( *a10p ) => " << short( *a10p ) << std::endl;
  std::cout << "short( *a11p ) => " << short( *a11p ) << std::endl;
  std::cout << "short( *a12p ) => " << short( *a12p ) << std::endl;
  std::cout << "short( *a13p ) => " << short( *a13p ) << std::endl;
  std::cout << "short( *a14p ) => " << short( *a14p ) << std::endl;
  
  std::cout << "int( *a0p ) => " << int( *a0p ) << std::endl;
  std::cout << "int( *a1p ) => " << int( *a1p ) << std::endl;
  std::cout << "int( *a2p ) => " << int( *a2p ) << std::endl;
  std::cout << "int( *a3p ) => " << int( *a3p ) << std::endl;
  std::cout << "int( *a4p ) => " << int( *a4p ) << std::endl;
  std::cout << "int( *a5p ) => " << int( *a5p ) << std::endl;
  std::cout << "int( *a6p ) => " << int( *a6p ) << std::endl;
  std::cout << "int( *a7p ) => " << int( *a7p ) << std::endl;
  std::cout << "int( *a8p ) => " << int( *a8p ) << std::endl;
  std::cout << "int( *a9p ) => " << int( *a9p ) << std::endl;
  std::cout << "int( *a10p ) => " << int( *a10p ) << std::endl;
  std::cout << "int( *a11p ) => " << int( *a11p ) << std::endl;
  std::cout << "int( *a12p ) => " << int( *a12p ) << std::endl;
  std::cout << "int( *a13p ) => " << int( *a13p ) << std::endl;
  std::cout << "int( *a14p ) => " << int( *a14p ) << std::endl;
  
  std::cout << "long( *a0p ) => " << long( *a0p ) << std::endl;
  std::cout << "long( *a1p ) => " << long( *a1p ) << std::endl;
  std::cout << "long( *a2p ) => " << long( *a2p ) << std::endl;
  std::cout << "long( *a3p ) => " << long( *a3p ) << std::endl;
  std::cout << "long( *a4p ) => " << long( *a4p ) << std::endl;
  std::cout << "long( *a5p ) => " << long( *a5p ) << std::endl;
  std::cout << "long( *a6p ) => " << long( *a6p ) << std::endl;
  std::cout << "long( *a7p ) => " << long( *a7p ) << std::endl;
  std::cout << "long( *a8p ) => " << long( *a8p ) << std::endl;
  std::cout << "long( *a9p ) => " << long( *a9p ) << std::endl;
  std::cout << "long( *a10p ) => " << long( *a10p ) << std::endl;
  std::cout << "long( *a11p ) => " << long( *a11p ) << std::endl;
  std::cout << "long( *a12p ) => " << long( *a12p ) << std::endl;
  std::cout << "long( *a13p ) => " << long( *a13p ) << std::endl;
  std::cout << "long( *a14p ) => " << long( *a14p ) << std::endl;
  
  std::cout << "float( *a0p ) => " << float( *a0p ) << std::endl;
  std::cout << "float( *a1p ) => " << float( *a1p ) << std::endl;
  std::cout << "float( *a2p ) => " << float( *a2p ) << std::endl;
  std::cout << "float( *a3p ) => " << float( *a3p ) << std::endl;
  std::cout << "float( *a4p ) => " << float( *a4p ) << std::endl;
  std::cout << "float( *a5p ) => " << float( *a5p ) << std::endl;
  std::cout << "float( *a6p ) => " << float( *a6p ) << std::endl;
  std::cout << "float( *a7p ) => " << float( *a7p ) << std::endl;
  std::cout << "float( *a8p ) => " << float( *a8p ) << std::endl;
  std::cout << "float( *a9p ) => " << float( *a9p ) << std::endl;
  std::cout << "float( *a10p ) => " << float( *a10p ) << std::endl;
  std::cout << "float( *a11p ) => " << float( *a11p ) << std::endl;
  std::cout << "float( *a12p ) => " << float( *a12p ) << std::endl;
  std::cout << "float( *a13p ) => " << float( *a13p ) << std::endl;
  std::cout << "float( *a14p ) => " << float( *a14p ) << std::endl;
  
  std::cout << "double( *a0p ) => " << double( *a0p ) << std::endl;
  std::cout << "double( *a1p ) => " << double( *a1p ) << std::endl;
  std::cout << "double( *a2p ) => " << double( *a2p ) << std::endl;
  std::cout << "double( *a3p ) => " << double( *a3p ) << std::endl;
  std::cout << "double( *a4p ) => " << double( *a4p ) << std::endl;
  std::cout << "double( *a5p ) => " << double( *a5p ) << std::endl;
  std::cout << "double( *a6p ) => " << double( *a6p ) << std::endl;
  std::cout << "double( *a7p ) => " << double( *a7p ) << std::endl;
  std::cout << "double( *a8p ) => " << double( *a8p ) << std::endl;
  std::cout << "double( *a9p ) => " << double( *a9p ) << std::endl;
  std::cout << "double( *a10p ) => " << double( *a10p ) << std::endl;
  std::cout << "double( *a11p ) => " << double( *a11p ) << std::endl;
  std::cout << "double( *a12p ) => " << double( *a12p ) << std::endl;
  std::cout << "double( *a13p ) => " << double( *a13p ) << std::endl;
  std::cout << "double( *a14p ) => " << double( *a14p ) << std::endl;
  /*
  */
  
}

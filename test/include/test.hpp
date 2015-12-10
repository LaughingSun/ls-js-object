
#ifndef LS_JS_OBJECT
# error please define LS_JS_OBJECT as a ls::js:: object type
#endif

#ifndef LS_JS_TEST
#define EXPAND(a,b) b ## a
#define DQUOTE(a) #a
#define LPAREN (
#define RPAREN )

std::string tmp;

#define LS_JS_CAST(a,b,c) \
std::cout << #b << "( " << #c << DQUOTE(a) << " ) => " << b( EXPAND(a,c) ) << std::endl;

#define LS_JS_STRINGIFY(a,b) \
std::cout << #b << DQUOTE(a) << ".stringify( ) => " << (tmp = EXPAND(a,b).stringify( )) << std::endl;

#define LS_JS_PARSE(a) \
std::cout << #a << "::Parse( '" << tmp << "' ) => " << a::Parse( tmp ) << std::endl;

#define LS_JS_TEST(a,b,c) \
a EXPAND(a,b) c; \
std::cout << DQUOTE(a) << ' ' << #b << DQUOTE(a) << #c << " => " << EXPAND(a,b) << std::endl; \
LS_JS_CAST(a,std::string,b) \
LS_JS_CAST(a,bool,b) \
LS_JS_CAST(a,char,b) \
LS_JS_CAST(a,short,b) \
LS_JS_CAST(a,int,b) \
LS_JS_CAST(a,long,b) \
LS_JS_CAST(a,float,b) \
LS_JS_CAST(a,double,b) \
LS_JS_STRINGIFY(a,b) \
LS_JS_PARSE(a)

#define LS_JS_TEST2(a,b,c,d,e) \
a EXPAND(a,b) LPAREN c EXPAND(a,d) e RPAREN; \
std::cout << DQUOTE(a) << ' ' << #b << DQUOTE(a) << #c << "( " << #d << DQUOTE(a) << #e << " ) => " << EXPAND(a,b) << std::endl; \
LS_JS_CAST(a,std::string,b) \
LS_JS_CAST(a,bool,b) \
LS_JS_CAST(a,char,b) \
LS_JS_CAST(a,short,b) \
LS_JS_CAST(a,int,b) \
LS_JS_CAST(a,long,b) \
LS_JS_CAST(a,float,b) \
LS_JS_CAST(a,double,b)

#define LS_JS_TEST3(a,b,c) \
a EXPAND(a,b) = new a c; \
std::cout << DQUOTE(a) << ' ' << #b << DQUOTE(a) << " = new " << DQUOTE(a) << #c << " => " << EXPAND(a,b) << std::endl; \
LS_JS_CAST(a,std::string,b) \
LS_JS_CAST(a,bool,b) \
LS_JS_CAST(a,char,b) \
LS_JS_CAST(a,short,b) \
LS_JS_CAST(a,int,b) \
LS_JS_CAST(a,long,b) \
LS_JS_CAST(a,float,b) \
LS_JS_CAST(a,double,b)

#endif


using namespace ls::js;

//LS_JS_OBJECT s1String( "43.2" );
//std::cout << s1String << std::endl;
//std::string result = s1String.stringify( );
//std::cout << result << std::endl;
//LS_JS_OBJECT rs = LS_JS_OBJECT::Parse( result );
//std::cout << rs << std::endl;

//LS_JS_OBJECT s1String( "43.2" )
//LS_JS_STRINGIFY(LS_JS_OBJECT,s1)
//LS_JS_PARSE(LS_JS_OBJECT)

//LS_JS_OBJECT s1String( "43.2" );
//LS_JS_STRINGIFY(LS_JS_OBJECT,s1)
//LS_JS_OBJECT rs = LS_JS_OBJECT::Parse( tmp );
//std::cout << rs << std::endl;
//std::cout << LS_JS_OBJECT::Parse( tmp ) << std::endl;

LS_JS_TEST(LS_JS_OBJECT,a0,)
LS_JS_TEST(LS_JS_OBJECT,a1,( false ))
LS_JS_TEST(LS_JS_OBJECT,a2,( true ))
LS_JS_TEST(LS_JS_OBJECT,a3,( '\0' ))
LS_JS_TEST(LS_JS_OBJECT,a4,( '4' ))
LS_JS_TEST(LS_JS_OBJECT,a5,( char( 5 ) ))
LS_JS_TEST(LS_JS_OBJECT,a6,( short( 6 ) ))
LS_JS_TEST(LS_JS_OBJECT,a7,( int( 7 ) ))
LS_JS_TEST(LS_JS_OBJECT,a8,( long( 8 ) ))
LS_JS_TEST(LS_JS_OBJECT,a9,( float( 9.5 ) ))
LS_JS_TEST(LS_JS_OBJECT,a10,( double( 10.5 ) ))
LS_JS_TEST(LS_JS_OBJECT,a11,( "11" ))
LS_JS_TEST(LS_JS_OBJECT,a12,( "12.5" ))
LS_JS_TEST(LS_JS_OBJECT,a13,( std::string( "13" ) ))
LS_JS_TEST(LS_JS_OBJECT,a14,( std::string( "14.5" ) ))

LS_JS_TEST2(LS_JS_OBJECT,a15,,a0,)
LS_JS_TEST2(LS_JS_OBJECT,a16,,a2,)

LS_JS_TEST3(LS_JS_OBJECT,*a0p,)
LS_JS_TEST3(LS_JS_OBJECT,*a1p,( false ))
LS_JS_TEST3(LS_JS_OBJECT,*a2p,( true ))
LS_JS_TEST3(LS_JS_OBJECT,*a3p,( '\0' ))
LS_JS_TEST3(LS_JS_OBJECT,*a4p,( '4' ))
LS_JS_TEST3(LS_JS_OBJECT,*a5p,( char( 5 ) ))
LS_JS_TEST3(LS_JS_OBJECT,*a6p,( short( 6 ) ))
LS_JS_TEST3(LS_JS_OBJECT,*a7p,( int( 7 ) ))
LS_JS_TEST3(LS_JS_OBJECT,*a8p,( long( 8 ) ))
LS_JS_TEST3(LS_JS_OBJECT,*a9p,( float( 9.5 ) ))
LS_JS_TEST3(LS_JS_OBJECT,*a10p,( double( 10.5 ) ))
LS_JS_TEST3(LS_JS_OBJECT,*a11p,( "11" ))
LS_JS_TEST3(LS_JS_OBJECT,*a12p,( "12.5" ))
LS_JS_TEST3(LS_JS_OBJECT,*a13p,( std::string( "13" ) ))
LS_JS_TEST3(LS_JS_OBJECT,*a14p,( std::string( "14.5" ) ))




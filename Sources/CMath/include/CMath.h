#ifndef SOURCES_SWIFTANDC_CMATH_INCLUDE_CMATH_H
#define SOURCES_SWIFTANDC_CMATH_INCLUDE_CMATH_H

// Primitive types.
char c = 'a';
short s = 1;
int i = 2;
long l = 3;
float f = 4.0;
double d = 5.0;

// Pointers.
char * p1 = &c;
const char * p2 = &c;
char * const p3 = &c;
const char * const p4 = &c;

// Object-like macros.
#define PI 3.14

// Function (declared here, defined in CMath.c).
int square(int x);


// Struct.
struct Point {
	int x;
	int y;
};

struct Point p = {1, 2};

// Enum.
enum Direction { NORTH, SOUTH, EAST, WEST};

// C-style arrays.
char greeting[] = "Hello, world!";

// Stuff below this line won't be exported.
// Swift does not support interop with C unions, bitfields and function-like macros.
// ---------------------------------------

// Union.
union IntAndFloat{
	int ival;
	float fval;
};

union IntAndFloat iaf;

// Bitfields.
struct ThreeBits {
	unsigned int first: 1;
	unsigned int seconds: 1;
	unsigned int third: 1;
};

struct ThreeBits t;

// Function-like macros.
#define MAX(x, y) x > y ? x : y

#endif  // SOURCES_SWIFTANDC_CMATH_INCLUDE_CMATH_H

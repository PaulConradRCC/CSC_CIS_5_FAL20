#include <iostream>
using namespace std;

// named constant
const int BITS_PER_BYTE = 8;

int main() {
    char a_char = 'A';
    unsigned char b_char = 'B';
    short int a_short = -12345;
    unsigned short int b_short = 12345;
    int an_int = -1000000;
    unsigned int an_unsigned_int = 2000000;
    long a_long = -1000000000;
    unsigned long an_unsigned_long = 2000000000;
    
    // floats
    float a_float = 4.567e12;
    double a_double = 5.6789e123;
    long double a_long_double = 6.789e234;
    
    // demonstrate sizeof
    cout << "char = " << sizeof(a_char) << " bytes (" << sizeof(a_char) * BITS_PER_BYTE << " bits)\n\r";
    cout << "unsigned char = " << sizeof(b_char) << " bytes (" << sizeof(b_char) * BITS_PER_BYTE << " bits)\n\r";
    cout << "short int = " <<sizeof(a_short) << " bytes (" << sizeof(a_short) * BITS_PER_BYTE << " bits)\n\r";
    cout << "unsigned short int = " <<sizeof(b_short) << " bytes (" << sizeof(b_short) * BITS_PER_BYTE << " bits)\n\r";
    cout << "int = " << sizeof(an_int) << " bytes (" << sizeof(an_int) * BITS_PER_BYTE << " bits)\n\r";
    cout << "unsigned int = " << sizeof(an_unsigned_int) << " bytes (" << sizeof(an_unsigned_int) * BITS_PER_BYTE << " bits)\n\r";
    cout << "long = " << sizeof(a_long) << " bytes (" << sizeof(a_long) * BITS_PER_BYTE << " bits)\n\r";
    cout << "unsigned long = " << sizeof(an_unsigned_long) << " bytes (" << sizeof(an_unsigned_long) * BITS_PER_BYTE << " bits)\n\r";
    
    // floats
    cout << "float = " << sizeof(a_float) << " bytes (" << sizeof(a_float) * BITS_PER_BYTE << " bits)\n\r";
    cout << "double = " << sizeof(a_double) << " bytes (" << sizeof(a_double) * BITS_PER_BYTE << " bits)\n\r";
    cout << "long double = " << sizeof(a_long_double) << " bytes (" << sizeof(a_long_double) * BITS_PER_BYTE << " bits)\n\r";
    return 0;
}


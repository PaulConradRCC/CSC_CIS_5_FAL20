/*Gaddis - Chp 2 - Problem 9 - Pg 83
 * Cyborg Data Type Sizes
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int size_of_char = sizeof(char);
    int size_of_int = sizeof(int);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);
    int size_of_short = sizeof(short);
    
    cout << "  Size of char: " << size_of_char << endl;
    cout << "   Size of int: " << size_of_int << endl;
    cout << " Size of float: " << size_of_float << endl;
    cout << "Size of double: " << size_of_double << endl;
    cout << "Size of short: " << size_of_short << endl;
    
    short a = 30000;
    short b = 10000;
    unsigned short c = a + b;
    
    cout << " a = " << a << "\n"
         << " b = " << b << "\n"
         << " c = " << c << endl;
    
    return 0;
}


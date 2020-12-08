
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    // some variables
    char a = 'A';
    short int short_int = 12345;
    int x = 123;
    int y = 456;
    
    char *char_ptr = &a;                // char pointer pointing to address of variable a
    short int *si_ptr = &short_int;     // short integer pointer pointing to address of variable si_ptr
    int * integer_ptr = &x;             // integer pointer
    int* integer_ptr2 = &y;             // another integer pointer
    
    // let's output the address of our variable (in hexadecimal)
    cout << "variable a is located at: " << (void *)char_ptr << endl;
    cout << "variable short_int is located at: " << si_ptr << endl;
    cout << "variable x is located at: " << integer_ptr << endl;
    cout << "variable y is located at: " << integer_ptr2 << endl;
    
    // let's output the data at the address of our variables
    cout << "data from a: " << *char_ptr << endl;
    cout << "data from short_int: " << *si_ptr << endl;
    cout << "data from x: " << *integer_ptr << endl;
    cout << "data from y: " << *integer_ptr2 << endl;
    return 0;
}


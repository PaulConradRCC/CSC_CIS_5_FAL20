#define nullptr 0 // comment this line out if you compile with C++11 standard

#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    int * int_ptr = nullptr;
    
    int our_array[4] = { 10, 12, 11, 14 };
    
    int_ptr = our_array;    // int_ptr points to beginning of our_array
    
    cout << "Address at the beginning of our_array is: " << our_array << endl;
    cout << "Address stored in int_ptr is: " << int_ptr << endl;
    cout << "Data at address stored in int_ptr is: " << *int_ptr << endl;
    
    for(int i=0; i<4; i++)
    {
        cout << "    array and [ ] operator: " << our_array[i] << endl;
        cout << "  pointer and [ ] operator: " << int_ptr[i] << endl;
        cout << "  array and ptr arithmetic: " << *(our_array + i) << endl; // demonstrate our_array[i] same as *(our_array+i)
        cout << "pointer and ptr arithmetic: " << *(int_ptr + i) << endl;
    }
    
    float a_float_value = 1.1;
    
    int_ptr = (int *)&a_float_value;
    cout << "int_ptr = " << int_ptr << endl;
    cout << "data pointed by int_ptr = " << *int_ptr << endl;
    
    return 0;
}


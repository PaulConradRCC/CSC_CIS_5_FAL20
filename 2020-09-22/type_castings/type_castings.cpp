/* 
 * File:   type_castings.cpp
 * Author: pconrad
 *
 * Created on September 22, 2020, 10:20 AM
 */

#include <iostream>
using namespace std;

int main() {

    int int_value;
    long long_value;
    
    // prompt user for an integer:
    cout << "Please enter an integer value: ";
    cin >> int_value;
    
    // cast the integer to long
    long_value = static_cast<long int>(int_value);
    
    // output the integer value and also output the integer value promoted to
    // a long (this should output the same thing)
    cout << " int_value = " << int_value << endl;
    cout << "long_value = " << long_value << endl;
    
    //*************************************************************************
    
    // prompt user for a long integer:
    cout << "Please enter a long integer value: ";
    cin >> long_value;
    
    // cast the long integer to integer
    int_value = static_cast<int>(long_value);
    
    // output the integer value and also output the long int value demoted to
    // an int (this may not output the same thing due to demotion from long
    // to int)
    cout << " int_value = " << int_value << endl;
    cout << "long_value = " << long_value << endl;
    
    //*************************************************************************
    
    float float_value;      // 32-bit IEEE 754 Single Precision
    double double_value;    // 64-bit IEEE 754 Double Precision
    
    // prompt user for an integer:
    cout << "Please enter an integer value: ";
    cin >> int_value;
    
    // cast the integer to float and double
    float_value = static_cast<float>(int_value);
    double_value = static_cast<double>(int_value);
    
    // output the integer value and also output the float/double values 
    // promoted to a long (this should output the same thing)
    cout << "   int_value = " << int_value << endl;
    cout << " float_value = " << float_value << endl;
    cout << "double_value = " << double_value << endl;
    
    //*************************************************************************
    
    // prompt user for a long integer:
    cout << "Please enter a long integer value: ";
    cin >> long_value;
    
    // cast the long integer to float and double
    float_value = static_cast<float>(long_value);
    double_value = static_cast<double>(long_value);
    
    // output the integer value and also output the float/double values 
    // promoted to a long (this should output the same thing)
    cout << "  long_value = " << long_value << endl;
    cout << " float_value = " << float_value << endl;
    cout << "double_value = " << double_value << endl;
    
    //*************************************************************************
    
    // prompt user for a double precision float:
    cout << "Please enter a double precision float value: ";
    cin >> double_value;
    
    // cast the double to float and long integer (demotion)
    float_value = static_cast<float>(double_value);
    long_value = static_cast<long>(double_value);
    int_value = static_cast<int>(double_value);
    
    // output the double value and also output the float/long int values 
    // with demotion (this may not output the same thing due to demotion)
    cout << "double_value = " << double_value << endl;
    cout << " float_value = " << float_value << endl;
    cout << "  long_value = " << long_value << endl;
    cout << "   int_value = " << int_value << endl;
    
    return 0;
}


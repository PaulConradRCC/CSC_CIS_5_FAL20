/*Gaddis - Chapter 3 - Problem 15 - Page 146
 * Property Tax
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Ask user for actual value of property.
    float actual_value;
    cout << "Enter actual property value: ";
    cin >> actual_value;

    //Calculate assessment & tax.
    float assessment_value = actual_value * 0.60;
    float tax = assessment_value / 100 * 0.75;
    
    //Output assessment value and tax.
    cout << setw(20) << "Assessment value:"
         << setw(4) << "$" << setw(10) << setprecision(2) << fixed << showpoint
         << assessment_value << "\n"
         << setw(20) << "Tax:" << setw(4) << "$" << setw(10) << tax << endl;
            
    return 0;
}


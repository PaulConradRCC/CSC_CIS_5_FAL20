/*Gaddis - Chapter 2 - Problem #3 - Page 81
 * Sales Tax
 */

#include <iostream>

using namespace std;

const float state_tax = 0.04;    //State tax
const float county_tax = 0.02;    //County tax

int main(int argc, char** argv) {
    float purchase = 95;       //Purchase amount
//    float state_tax = 0.04;    //State tax
//    float county_tax = 0.03;    //County tax

    float total_tax = purchase * (state_tax + county_tax);
    
    cout << "Total tax: $"
         << total_tax
         << endl;

    return 0;
}


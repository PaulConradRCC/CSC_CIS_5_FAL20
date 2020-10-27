/*for loop examples
 */

#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_TERMS = 10000;

int main(int argc, char** argv) {

    long double pi_div_4 = 0;
    for( int i = 1; i <= NUM_TERMS; i++ ) {
        bool negative = (i % 2 == 0);
        
        pi_div_4 += 1.0 / ( i * 2 - 1) * (negative ? -1 : 1);
    }

    cout << setprecision(10) << pi_div_4 * 4 << endl;


    return 0;
}


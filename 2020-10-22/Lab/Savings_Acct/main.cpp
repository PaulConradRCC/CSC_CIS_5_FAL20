/*Savings account example
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    float principal = 1000;
    float apr = 0.05; //Annual percentage rate
    int   num_years = 10;
    float balance = principal;
    
    for( int period = 1; period <= num_years * 12; period++ ) {

        balance += balance * (apr/12); 

        balance += 0;
        
        cout << fixed << setprecision(2) << balance << endl;
    }

    return 0;
}


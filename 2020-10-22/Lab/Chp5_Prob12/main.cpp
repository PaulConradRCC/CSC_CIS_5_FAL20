/*Celsius-Fahrenheit table
 * Gaddis - Chp 5 - Prob 12
 */



#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    
    cout << "CELSIUS  FAHRENHEIT" << endl;
    for( int celsius = 0; celsius <= 20; celsius++ ) {
        float f = 9.0/5 * celsius + 32;
        cout << setw(7) << celsius << "  " << setw(7) << f << endl;
    }

    return 0;
}


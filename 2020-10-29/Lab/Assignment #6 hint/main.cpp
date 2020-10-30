/*ceil example
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

const float WEIGHT_60_OR_LESS = 1.75;
const float WEIGHT_120_OR_LESS = 2.95;
const float WEIGHT_400_OR_LESS = 3.55;
const float WEIGHT_1800_OR_LESS = 4.95;

int main(int argc, char** argv) {
    
    //float value = ceil( 7 / 9.0 );
    
    //cout << "value = " << value << endl;
    
    //ASK USER for weight & distance package is going
    //VALIDATE!
    
    if( weight <= 60 ) rate = WEIGHT_60_OR_LESS;
    else if( weight <= 120 ) rate = WEIGHT_120_OR_LESS;

    return 0;
}


/*Gaddis - Chp 4 - Prob 2
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char c;
    for( int i = 0; i < 127; i++ ) {
        c = i;
        cout << "Character " << i << " = " << c << endl;
    }

    return 0;
}


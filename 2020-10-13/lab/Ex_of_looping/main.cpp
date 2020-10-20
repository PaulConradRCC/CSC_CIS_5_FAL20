/*Loop examples
 * 3 loops:
 *   * while
 *   * do-while
 *   * for
 * 
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    
    int number;
    cout << "Enter a number from 1 to 100: ";
    cin >> number;

    for( int i = 0, j = 100 ; i <= number; i++, j -= 2 ) {
        //if( i % 3 ) continue;
        cout << i << " " << j << endl;        
    }

/*
    int i = 0;
    do {
        i++;
        if( i % 3 ) continue;
        cout << i << " ";

        if( i > 50 ) break;
    } while( i <= number );
*/
/*    
    while( number < 5 ) {
        cout << number << " ";
        number++;
    }
*/
    cout << endl;

    return 0;
}


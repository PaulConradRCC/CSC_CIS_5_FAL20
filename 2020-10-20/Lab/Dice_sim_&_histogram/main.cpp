/*Random dice simulations
 */

#include <iostream>
#include <cstdlib>

using namespace std;


int main(int argc, char** argv) {
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0;
    
    srand(time(0));
    
    for( int i = 0; i < 200; i++ ) {
      int die1 = rand() % 6 + 1;
      
      if( die1 == 1 ) sum1++;
      else if( die1 == 2 ) sum2++;
      else if( die1 == 3 ) sum3++;
      else if( die1 == 4 ) sum4++;
      else if( die1 == 5 ) sum5++;
      else if( die1 == 6 ) sum6++;
    
    }

    //Print result.
    cout << "1: ";
    for( int i = 0; i < sum1; i++ )
        cout << '*';
    cout << endl;

    cout << "2: ";
    for( int i = 0; i < sum2; i++ )
        cout << '*';
    cout << endl;

    cout << "3: ";
    for( int i = 0; i < sum3; i++ )
        cout << '*';
    cout << endl;

    cout << "4: ";
    for( int i = 0; i < sum4; i++ )
        cout << '*';
    cout << endl;

    cout << "5: ";
    for( int i = 0; i < sum5; i++ )
        cout << '*';
    cout << endl;

    cout << "6: ";
    for( int i = 0; i < sum6; i++ )
        cout << '*';
    cout << endl;

    return 0;
}


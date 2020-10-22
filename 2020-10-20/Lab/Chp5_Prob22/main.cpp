/*Gaddis - Chapter 5 - Problem 22
  Square Display
*/

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Ask the user for the size of the square.
    int size;
    bool loop_again = true;

    do {

      cout << "Enter the size (between 0 and 15): ";
      cin >> size;

      if( size < 0 || size > 15 ) {
        cout << "You must enter a number from 0 to 15!" << endl;
      }
      else loop_again = false;  //Data is good

    } while( loop_again );

    
    //Print out shape.
    for( int row = 1; row <= size; row++ ) {  //Loop over rows
        
        for( int col = 1; col <= (size - row); col++ ) {  //Loop over columns
            cout << 'X';
        }
        cout << endl;
    }

    return 0;
}


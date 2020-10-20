/*Gaddis - Chapter 5 - Problem 1
 Sum of Numbers
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Ask user for a positive number.
    int num;
    do {
      cout << "Please enter a positive number: ";
      cin >> num;
      if( num < 1 )
          cout << "You must enter a POSITIVE number!" << endl;
    } while( num < 1 );

    //Compute the sum.
    int sum = 0;
    int i;
    for( i = 1;  i <= num; i++ )
      sum += i;

    //Compute the product.
    int product = 1;
    for( int i = 1;  i <= num; i++ )
      product *= i;


    //Output result.
    cout << "The sum is " << sum << endl;
    cout << "The product is " << product << endl;
 
    return 0;
}


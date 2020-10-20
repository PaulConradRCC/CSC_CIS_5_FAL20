/*Gaddis - Chapter 4 - Problem 25
 Mobile Service Provider
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Output menu.
    char package;
    do {
      cout << "Choose which package:\n"
           << " A - $39.99 per month\n"
           << "     4 gigabytes provided\n"
           << "     Addition data costs are $10 per gigabyte\n\n"
           << " B - $59.99 per month\n"
           << "     8 gigabytes provided\n"
           << "     Addition data costs are $5 per gigabyte\n\n"
           << " C - $69.99 per month\n"
           << "     Unlimited data\n" << endl;
      cout << " : ";
      cin >> package;
    
      package = toupper( package );

      if( package != 'A' && package != 'B' && package != 'C' ) {
          cout << "Sorry! You must choose A, B, or C!\n" << endl;
      }
    } while( package != 'A' && package != 'B' && package != 'C' );
    

    //Ask how much data was used.
    int num_gb;
    do {
      cout << "How many gigabytes were used? ";
      cin >> num_gb;
      
      if( num_gb < 0 )
          cout << "Sorry! Number of gigabytes must be greater than 0!\n"
               << endl;
          
    } while( num_gb < 0 );
    
    //Process package selection.
    float cost = 0.0;
    switch( package ) {
        case 'A':
            //'A' code here
            cost = 39.99 +
                   ((num_gb > 4) ? (10 * (num_gb - 4)) : 0);

/*            
            cost = 39.99;

            if( num_gb > 4 ) {
                cost += 10 * (num_gb - 4);
            }
*/

            break;

        case 'B':
            //'B' code here
            cost = 59.99;

            if( num_gb > 8 ) {
                cost += 5 * (num_gb - 8);
            }

            break;

        case 'C':
            //'C' code here
            cost = 69.99;

            break;
       
        default:
            //Oops, not a selection!
            //Print error message
            cout << "Sorry! "
                 << package << " is not a selection." << endl;
            return 1;
    }

    //Print out bill.
    cout << "The bill is: $"
         << fixed << setprecision(2)
         << cost << endl;
    return 0;
}


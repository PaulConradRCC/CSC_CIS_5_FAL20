/*Menu Example
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    //Print menu
    int choice;
    do {
      cout << "Please make your selection:\n"
           << " 1 - Doritos           $ 1.00\n"
           << " 2 - Hershey bar       $ 1.50\n"
           << " 3 - Reeses            $ 1.50\n"
           << " 4 - Almond Joy        $ 1.50\n"
           << " 5 - Milky Way         $ 1.50\n"
           << " 6 - Bottled water     $ 2.00" << endl;
      cout << " : ";
      cin >> choice;
      
      if( choice < 1 || choice > 6 )
          cout << "Sorry! Select a number from 1 to 6" << endl;
      
    } while( ! (choice >= 1 && choice <= 6) );
    
    
    //Process selection
    float cost;
    switch( choice ) {
        case 1: //Doritos
            cost = 1.00;
            break;
        case 2: //Hersheys
        case 3: //Reeses
        case 4: //Almond Joy
        case 5: //Milky Way
            cost = 1.50;
            break;
        case 6: //Bottled water
            cost = 2.00;
            break;

        default: //Shouldn't ever get here.
            cout << "Sorry! That was not a selection." << endl;
    }
    
    //Ask user to enter the correct change.
    float amount_paid = 0;
    do {
      cout << "Please pay $" << fixed << setprecision(2)
           << (cost - amount_paid) << "\n"
           << " : ";
      float coin;
      cin >> coin;
      amount_paid += coin;
    } while( amount_paid < cost );
    
    //Output.
    cout << "Here is your snack or drink!" << endl;

    return 0;
}


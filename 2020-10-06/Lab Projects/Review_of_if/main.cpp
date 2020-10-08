

#include <cstdlib>
#include <iostream>

using namespace std;

//Set constant NUM_SIDES = 6
const int NUM_SIDES = 6;

int main(int argc, char** argv) {
    srand( time(0) );

    //Ask user for number
    int user_number;
    cout << "Enter a number from 1 to " << NUM_SIDES << ": ";
    cin >> user_number;

    bool ErrorFlag = user_number < 1 || user_number > NUM_SIDES;
    
    if( ErrorFlag ) {

        cout << "You must enter a number from 1 to " << NUM_SIDES << "!!"
             << endl;
        return 1;
    }

    
    //Simulate die roll
    int Result = rand() % NUM_SIDES + 1;

    //Is Result > number?
    //If so, print congratulations message,
    //else print 'sorry' message.
    cout << "The roll was a " << Result << endl;
    if( Result == user_number ) {
        cout << "Congratulations!" << endl;
    }

    
    
    return 0;
}


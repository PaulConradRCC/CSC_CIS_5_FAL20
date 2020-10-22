/*Gaddis - Chapter 5 - Problem 20
 Random number guessing game
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Intro message.
    cout << "I am thinking of a number between 1 and 100. Try to guess it!"
         << endl;

    //Generate random number;
    srand(time(0));
    int r = rand() % 100 + 1; //Random number from 1 to 100

    //Main loop
    int guess;
    do {
        cout << "What's your guess? ";
        cin >> guess;
        
        if( guess > r )
            cout << "Too high, try again" << endl;
        else if( guess < r )
            cout << "Too low, try again" << endl;
        else {
            cout << "Congratulations! You guessed it" << endl;
        }
    } while( guess != r );

    return 0;
}


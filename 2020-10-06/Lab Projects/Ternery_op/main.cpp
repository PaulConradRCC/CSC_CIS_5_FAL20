/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    
    bool UserWon = false;  //Assume user has not won.
    
    //...
//    UserWon = true;
            
//    if( UserWon ) cout << "Congratulations!" << endl;
//    else cout << "Sorry, you lost!" << endl;

    UserWon = true;
    
    string result = ( UserWon ? "Congratulations" : "Sorry, you lost!" );
    
    cout << "Game Result: " << result << endl;

    return 0;
}


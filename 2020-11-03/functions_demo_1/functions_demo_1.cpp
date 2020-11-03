
/* 
 * File:   functions_demo_1.cpp
 * Author: pconrad
 *
 * Created on November 3, 2020, 10:15 AM
 */

#include <iostream>
#include <string>
using namespace std;

// function prototypes
void DisplayHelloWorld();   // void function with no parameters, our prototype.
void OutputMessageXTimes(string message, int x);

// main function implementation
int main() {
    DisplayHelloWorld();    // call DisplayHelloWorld function
    OutputMessageXTimes("Hey there class!", 5); // call OutputMessageXTimes function
        
    return 0;
}

// function implementation (definition - where your code is for function body)
void DisplayHelloWorld()
{
    cout << "Hello World!! From DisplayHelloWorld function" << endl;
}

void OutputMessageXTimes(string message, int x)
{
    for(int count=0; count<x; count++ )
        cout << message << endl;
}
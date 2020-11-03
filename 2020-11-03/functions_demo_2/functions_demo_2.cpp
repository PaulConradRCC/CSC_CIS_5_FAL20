/* 
 * File:   functions_demo_2.cpp
 * Author: pconrad
 *
 * Created on November 3, 2020, 10:34 AM
 */

#include <iostream>
#include <string>
using namespace std;

// function prototypes
void abc(int x);
int xyz(int x);
void output_message(string message);

int xyz(int x)
{
    abc(0);
    return x;
}

void abc(int x)
{
    if (x==0)
        return;
    
    xyz(x-1);
}

void output_message(string message)
{
    cout << message << endl;
    abc(3);
}

int main() {

    output_message("Does this work???");
    
    return 0;
}


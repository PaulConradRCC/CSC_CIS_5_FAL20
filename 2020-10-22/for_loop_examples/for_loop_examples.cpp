/* 
 * File:   for_loop_examples.cpp
 * Author: pconrad
 *
 * Created on October 22, 2020, 10:24 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

const int FIELD_WIDTH = 12;

int main() {

    int minimum_number, maximum_number;
    
    // prompt
    cout << "Enter minimum starting number for table: ";
    cin >> minimum_number;
    
    cout << "Enter maximum starting number for table: ";
    cin >> maximum_number;
        
    cout << setw(FIELD_WIDTH) << "x";
    cout << setw(FIELD_WIDTH) << "x squared";
    cout << setw(FIELD_WIDTH) << "x cubed" << endl;
    
    for(int count=1; count <= 36; count++)
        cout << "-";
    cout << endl;
    
    for(int x=minimum_number; x <= maximum_number; x++)
    {
        cout << setw(FIELD_WIDTH) << x;
        cout << setw(FIELD_WIDTH) << x*x;
        cout << setw(FIELD_WIDTH) << x*x*x << endl;
    }
        
    /*
    cout << setw(FIELD_WIDTH) << "x";
    cout << setw(FIELD_WIDTH) << "x squared";
    cout << setw(FIELD_WIDTH) << "x cubed" << endl;
    
    int count;
    for(count=1; count <= 36; count++)
        cout << "-";
    cout << endl;
    
    int x=minimum_number;
    for( ; x <= maximum_number; x++)
    {
        cout << setw(FIELD_WIDTH) << x;
        cout << setw(FIELD_WIDTH) << x*x;
        cout << setw(FIELD_WIDTH) << x*x*x << endl;
    }
    */
    
    /*
    cout << setw(FIELD_WIDTH) << "x";
    cout << setw(FIELD_WIDTH) << "x squared";
    cout << setw(FIELD_WIDTH) << "x cubed" << endl;
    
    int count = 1;
    for(; ; count++)
        if ( count <= 36)
            cout << "-";
        else
            break;
    
    cout << endl;
    
    int x=minimum_number;
    for( ; x <= maximum_number; )
    {
        cout << setw(FIELD_WIDTH) << x;
        cout << setw(FIELD_WIDTH) << x*x;
        cout << setw(FIELD_WIDTH) << x*x*x << endl;
        x++;
    }
    */
    
    /*
    cout << setw(FIELD_WIDTH) << "x";
    cout << setw(FIELD_WIDTH) << "x squared";
    cout << setw(FIELD_WIDTH) << "x cubed" << endl;
    
    int count = 1;
    for(; ;)
        if ( count++ <= 36)
            cout << "-";
        else
            break;
    
    cout << endl;
    
    int x=minimum_number;
    for( ; ; )
    {
        if ( x <= maximum_number )
        {
            cout << setw(FIELD_WIDTH) << x;
            cout << setw(FIELD_WIDTH) << x*x;
            cout << setw(FIELD_WIDTH) << x*x*x << endl;
            x++;
        }
        else
            break;
        
    }
    */
    
    return 0;
}


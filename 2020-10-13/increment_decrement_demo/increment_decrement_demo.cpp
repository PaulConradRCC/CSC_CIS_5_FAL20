/* 
 * File:   increment_decrement_demo.cpp
 * Author: pconrad
 *
 * Created on October 13, 2020, 10:36 AM
 */

#include <iostream>
using namespace std;

int main() {

    int x, y;
    cout << "Enter a value for x: ";
    cin >> x;
    
    cout << "Enter a value for y: ";
    cin >> y;
    
    int org_x=x, org_y=y;
    
    int someVal = ++x + y--;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = ++x + y-- ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = x++ + y--;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = x++ + y-- ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = --x + y--;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = --x + y-- ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = x-- + y--;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = x-- + y-- ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    /////////////////////////////////////////////////////////////////////
    
    x=org_x;
    y=org_y;
    
    someVal = ++x + --y;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = ++x + --y ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = x++ + --y;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = x++ + --y ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = --x + --y;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = --x + --y ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = x-- + --y;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = x++ + y-- ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    /////////////////////////////////////////////////////////////////////
    
    someVal = ++x + y++;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = x++ + y++ ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = --x + y++;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = --x + y++ ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = x-- + y++;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = x-- + y++ ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    /////////////////////////////////////////////////////////////////////
    
    x=org_x;
    y=org_y;
    
    someVal = ++x + ++y;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = ++x + ++y ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = x++ + ++y;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = x++ + ++y ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = --x + ++y;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = --x + ++y ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
    
    x=org_x;
    y=org_y;
    
    someVal = x-- + ++y;
    cout << "x=" << org_x << ", y=" << org_y << "; ";
    cout << "Evaluating: someVal = x-- + ++y ... ";
    cout << "x=" << x << ", y=" << y << ", someVal=" << someVal << endl;
        
    return 0;
}


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    int a = 123, b = 32, c = 10542;
    double f = 12.34567834343, g = 123.45678, h = 15345.234324;
    float v = 321;

    cout << showpoint << v << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    cout << endl;
 
    cout << setw(10) << "$" << setw(10) << left << setprecision(2) << fixed << f << endl;
    cout << setw(10) << "$" << setw(10)  << g << endl;
    cout << setw(10) << "$" << setw(10) << h << endl;
    
    /*
     setw()
     fixed
     setprecision()
     left
     right
     showpoint
     */

    return 0;
}

/*
    string s1 = "Fred", s2 = "Barney", s3 = "Wilma", s4 = "Betty";
    
    //Find maximum length of the strings.
    int max_len = s1.length();
    if( max_len < s2.length() ) max_len = s2.length();
    if( max_len < s3.length() ) max_len = s3.length();
    if( max_len < s4.length() ) max_len = s4.length();
    
    //cout << setw(max_len) << s1 << "\n"
    //     << setw(max_len) << s2 << "\n"
    //     << setw(max_len) << s3 << "\n"
    //     << setw(max_len) << s4 << "\n"

*/
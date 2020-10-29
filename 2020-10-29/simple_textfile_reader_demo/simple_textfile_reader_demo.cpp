/* 
 * File:   simple_textfile_reader_demo.cpp
 * Author: pconrad
 *
 * Created on October 29, 2020, 10:22 AM
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    // declare variables for our file input
    string filename, a_string;
    char a_char;
    short int a_short_int;
    int an_integer;
    float a_float;
    double a_double;
    
    // prompt the user for the name of the file to read in as input!
    cout << "Enter the name of the file you want to read: ";
    getline(cin, filename, '\n');
    
    // step 1: create an ifstream object to read in the data file
    ifstream input_file;
    
    // step 2: open the file for input!!!
    input_file.open( filename.c_str() );  // needed for C++98 standard
    
    if (input_file)  // evaluates to true if input_file was successfully opened!
    {
        // step 3: read in the data, must be done in the same order the data was written out
        input_file >> a_char;
        input_file >> a_short_int;
        input_file >> an_integer;
        input_file >> a_float;
        input_file >> a_double;
        input_file.ignore(); // ignore extra carriage return...
        getline(input_file, a_string, '\n');
        
        // step 4: close the file when all data has been read in!
        // output the data to the screen
        cout << "     a_char: " << a_char << endl;
        cout << "a_short_int: " << a_short_int << endl;
        cout << " an_integer: " << an_integer << endl;
        cout << "    a_float: " << a_float << endl;
        cout << "   a_double: " << a_double << endl;
        cout << "   a_string: " << a_string << endl;
    }
    else
    {
        cout << "Uh oh!  Could not open the file named " << filename << " for input!" << endl;
    }
    
    return 0;
}


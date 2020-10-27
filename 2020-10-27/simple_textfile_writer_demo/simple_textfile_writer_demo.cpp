
/* 
 * File:   simple_textfile_writer_demo.cpp
 * Author: pconrad
 *
 * Created on October 27, 2020, 10:35 AM
 */

#include <iostream>
#include <fstream>      // for file I/O
#include <string>       // used for filename variable 
using namespace std;

int main() {
    // this program will prompt the user for a filename (can have drive letter and path if needed)
    // then, we will ask the user to enter a character, short integer, integer,
    // float and double values, and a string; after that, we'll write the data to the textfile with the
    // user supplied filename
    
    string filename, a_string;
    char a_char;
    short int a_short_int;
    int an_integer;
    float a_float;
    double a_double;
    
    // prompt
    cout << "Enter the name of the file you want to write: ";
    getline(cin, filename, '\n'); // this allows us to have user provide a filename with spaces in it!
    
    // prompt the user for data
    cout << "Enter a char: ";
    cin >> a_char;
    cout << "Enter a short integer: ";
    cin >> a_short_int;
    cout << "Enter an integer: ";
    cin >> an_integer;
    cout << "Enter a float: ";
    cin >> a_float;
    cout << "Enter a double: ";
    cin >> a_double;
    cout << "Enter a string: ";
    cin.ignore(); // previous cin has a left over carriage return left, use ignore to skip it
    getline(cin, a_string, '\n'); // allows us to read in a string with spaces
    
    // output the data!!!
    // step 1: create the ofstream object named output_file for output!
    ofstream output_file;
    
    // step 2: open the output_file stream object for output
    output_file.open( filename.c_str() );  // .c_str() needed when compiling with C++98 standard
    
    if (output_file)
    {
        // step #3: write out all of the data to file buffer for output, remember to close file when done!!!
        output_file << a_char << endl;
        output_file << a_short_int << endl;
        output_file << an_integer << endl;
        output_file << a_float << endl;
        output_file << a_double << endl;
        output_file << a_string << endl;

        // step 4: close the file (this will flush the data out of the buffer and into the file)
        output_file.close();
    }
    else
    {
        cout << "Uh oh! Could not open the file for output!" << endl;
        return 1;
    }
    
    return 0;
}


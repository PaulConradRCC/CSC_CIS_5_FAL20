#include <iostream>
#include <fstream>      // for file I/O
#include <string>       // used for filename variable 
using namespace std;

int main() {
   
    string filename;
    int input_value;
    
    // prompt
    cout << "Enter the name of the file you want to write: ";
    getline(cin, filename, '\n'); // this allows us to have user provide a filename with spaces in it!
    
    // step 1: create the ofstream object named output_file for output!
    ofstream output_file;
    
    // step 2: open the output_file stream object for output
    output_file.open( filename );  // .c_str() not needed when compiling with C++11 standard
        
    // prompt the user for data
    if (output_file)
    {
        // step #3: write out all of the data to file buffer for output, remember to close file when done!!!
        do
        {
            cout << "Enter a positive integer to write to file (negative value to stop input): ";
            cin >> input_value;
            
            if (input_value >=0 )
                output_file << input_value << endl; // write the data to the file buffer
        } while( input_value >= 0 );
        
        // bug fix - needed to include the sentinel value
        output_file << input_value << endl;
        
        // step 4: close the file (this will flush the data out of the buffer and into the file)
        output_file.close();
        
        cout << "Wrote the inputted data to the file: " << filename << endl;
    }
    else
    {
        cout << "Uh oh! Could not open the file for output!" << endl;
        return 1;
    }
    
    return 0;
}


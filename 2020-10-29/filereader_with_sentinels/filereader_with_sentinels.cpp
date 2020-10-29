#include <iostream>
#include <fstream>      // for file I/O
#include <string>       // used for filename variable 
using namespace std;

int main() {
   
    string filename;
    int input_value;
    
    // prompt
    cout << "Enter the name of the file you want to read: ";
    getline(cin, filename, '\n'); // this allows us to have user provide a filename with spaces in it!
    
    // step 1: create the ifstream object named output_file for output!
    ifstream input_file;
    
    // step 2: open the output_file stream object for output
    input_file.open( filename );  // .c_str() not needed when compiling with C++11 standard
        
    // read file for data
    if (input_file)
    {
        int min=2147483647, max=0, total=0;
        int data_count=0;
        
        // step #3: write out all of the data to file buffer for output, remember to close file when done!!!
        do
        {
            input_file >> input_value;
            
            if (input_value >=0 )
            {
                // read in the data
                if ( input_value < min ) min=input_value;
                if ( input_value > max ) max=input_value;
                total=total+input_value;
                data_count++;
            }
        } while( input_value >= 0 );
        
        // step 4: close the file (this will flush the data out of the buffer and into the file)
        input_file.close();
        
        cout << "Data file statistics" << endl << endl;
        cout << "Read in " << data_count << " values." << endl;
        cout << "  Sum of the data: " << total << endl;
        cout << "    Minimum value: " << min << endl;
        cout << "    Maximum value: " << max << endl;
        cout << "Average of values: " << total / data_count << endl;
        cout << "Average of values: " << (float)total / data_count << endl;
    }
    else
    {
        cout << "Uh oh! Could not open the file for output!" << endl;
        return 1;
    }
    
    return 0;
}


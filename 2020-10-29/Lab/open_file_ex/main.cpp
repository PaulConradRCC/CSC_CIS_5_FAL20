/*Opening file example
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //Ask user for file name.
    string file_name;
    cout << "Enter a file name: ";
    getline( cin, file_name );
    
    ofstream OutFile;
    OutFile.open( file_name );
    
    OutFile << "This is a test" << endl;
    
    OutFile.close();

    return 0;
}


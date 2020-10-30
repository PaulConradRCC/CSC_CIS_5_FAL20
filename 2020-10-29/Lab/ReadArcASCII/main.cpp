/*
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(int argc, char** argv) {
    ifstream InFile( "/Users/jbenoit/Desktop/Demo/sample.asc" );
    
    //Check if file opened okay
    if( ! InFile ) {
        cout << "Couldn't open input file" << endl;
        return 1;
    }

    //Read header
    int NCols, NRows;
    float NoDataValue;
    string key;
    double value;

    for( int i = 0; i < 6; i++ ) {
      InFile >> key >> value;

      if( key == "ncols" ) NCols = (int)( value );
      else if( key == "nrows" ) NRows = (int)( value );
      else if( key == "nodata_value" ) NoDataValue = value;

      cout << key << " " << value << endl;
    }
    
    cout << "NCols = " << NCols << "\n"
         << "NRows = " << NRows << "\n";

    for( int i = 0; i < NRows; i++ ) {
        
        for( int j = 0; j < NCols; j++ ) {

            InFile >> value;
            if( value != NoDataValue ) {
               cout << value << " ";
              if( value > 80 )
                  break;
            }
            
        }

        if( value != NoDataValue && value > 80 )
            break;
        
    }
    
    return 0;
}


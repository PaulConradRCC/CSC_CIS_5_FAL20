/*Gaddis - Chp 5 - Prob 26
 Personal Web Page Generator
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //Ask user for name and description.
    string name, desc;
    cout << "Enter your name: ";
    getline( cin, name );
    cout << "Describe yourself: ";
    getline( cin, desc );

    //Generate HTML
    string html = "<html>";
           html += "<head>";
           html += "</head>";
           html += "<body>";
           html += "  <center>";
           html += "     <h1>";
           html += name;
           html += "</h1>";
           html += "  </center>";
           html += "  <hr />";
           html += desc;
           html += "  <hr />";
           html += "</body>";
           html += "</html>";
    
    //Write page to file.
    ofstream HTMLFile( "hello.html" );
    HTMLFile << html;

    HTMLFile.close();

    return 0;
}


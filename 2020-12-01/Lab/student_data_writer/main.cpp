// learn how to write data to a text file called "students.txt" for
// learning how to work with parallel arrays, sorting and searching

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char continue_prompt()
{
    char input;
    cout << "Do you want to enter another student record (Y/N)? ";
    cin >> input;
    
    return input;
}

void write_student_data()
{
    ofstream outFile;
    
    int student_id;
    string first_name, last_name;
    double gpa;
    
    // prompt for the data
    cout << "Enter student id number (as an integer): ";
    cin >> student_id;
    cin.ignore();
    
    cout << "Enter student first name: ";
    getline(cin, first_name);
    cout << "Enter student last name: ";
    getline(cin, last_name);
    cout << "Enter student gpa (in the format of x.xx): ";
    cin >> gpa;
    
    cout << "id: " << student_id << ", first_name: " << first_name << ", last name: ";
    cout << last_name << ", gpa: " << gpa << endl;
    
    outFile.open("C:\\Users\\Public\\students.txt", ios::app); // ios::app -> sets the end of file pointer to the end of the file
                                            // allows us to append data to the end of an existing file without
                                            // overwriting original data
    outFile << student_id << "\t" << first_name << "\t" << last_name << "\t" << gpa << endl;
    outFile.close();
}

int main(int argc, char** argv) {

    char choice;        // 'y' or 'Y' continues program
    
    do
    {
        write_student_data();
        choice = continue_prompt();
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}


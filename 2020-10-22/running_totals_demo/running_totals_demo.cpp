// running totals and products demo

#include <iostream>
using namespace std;

int main() {

    char choice; // could this be a char instead?
    do
    {        
        // output the menu title, change it to suit your program
        cout << "Running Totals and Products Demo!!!!" << endl;
        cout << endl;

        // output all the options to the screen
        // this template is for 4 menu items and a quit option
        cout << "A. Running total sum of integers from x to y" << endl;
        cout << "B. Running total and average of test scores" << endl;
        cout << "C. Running product (factorial function in math)" << endl;
        cout << "Q. Quit" << endl;

        cout << "Please choose an option (A, B, C, or Q): ";
        cin >> choice;

        switch(choice)
        {
            case 'A':
            case 'a':
                // do option #A
                {
                    int x, y;
                    cout << "Enter your minimum integer value and maximum integer value: ";
                    cin >> x >> y;
                    int sum=0, counter=x;
                    while ( counter <= y )
                    {
                        sum = sum + counter;
                        counter++;
                    }
                    cout << "The sum from " << x << " to " << y << " is " << sum << endl << endl;
                }
                break;           
                
            case 'B':
            case 'b':
                // do option #B
                {
                    double score, sum=0.0;
                    double min_score=100, max_score=0;
                    
                    int number_tests, counter=1;
                    cout << "Enter number of tests: ";
                    cin >> number_tests;
                    
                    while( counter <= number_tests )
                    {
                        cout << "Enter the test score #" << counter << " (must be between 0 and 100): ";
                        cin >> score;
                        if ( score >= 0 && score <= 100 )
                        {
                            sum = sum + score;
                            counter++;
                            
                            if ( score < min_score )
                                min_score = score;
                            
                            if ( score > max_score )
                                max_score = score;
                        }
                        else
                            cout << "INVALID SCORE! Must be between 0 and 100!" << endl;
                                                
                    }
                    
                    cout << "The total was " << sum << " and the average is ";
                    cout << sum / number_tests << endl;
                    cout << "Minimum score is " << min_score << endl;
                    cout << "maximum score is " << max_score << endl << endl;
                }
                break;

            case 'c':
            case 'C':
                // do option #C
                {
                    double factorial=1.0;
                    unsigned int number, counter=2;
                    
                    cout << "Enter your unsigned number to compute factorial: ";
                    cin >> number;
                    
                    if ( number > 1 )
                    {
                        while ( counter <= number )
                        {
                            factorial = factorial * counter;
                            counter++;
                        }
                    }
                    cout << number << "! is " << factorial << endl << endl;
                }
                break;

            case 'q':
            case 'Q':
                // do option #5
                cout << "You want to quit this program (Y=Yes, other chars=No)? ";
                char exit_choice;
                cin >> exit_choice;
                
                if ( exit_choice == 'Y' || exit_choice == 'y' )
                    return 0;            
                break;
                
            default:
                cout << "Incorrect choice! Please choose A, B, C, or Q!" << endl << endl;
        }
    } while (true);
}
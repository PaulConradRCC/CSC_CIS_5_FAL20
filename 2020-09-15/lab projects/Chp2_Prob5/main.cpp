/*Gaddis - Chp 2 - Problem 5 - Page 82
 * Average of values
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int a = 28, b = 32, c = 37, d = 24, e = 33;

    int sum = a + b + c + d + e;

    float average = sum / 5.0;

    cout << "Average: " << average << endl;
   
    return 0;
}


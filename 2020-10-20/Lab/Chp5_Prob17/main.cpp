/*Gaddis - Chapter 5 - Problem 17
 Sales Bar Chart
 */


#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Have user enter sales for 5 stores
    int store1, store2, store3, store4, store5;
    cout << "Enter today's sales for store 1: ";
    cin >> store1;
    cout << "Enter today's sales for store 2: ";
    cin >> store2;
    cout << "Enter today's sales for store 3: ";
    cin >> store3;
    cout << "Enter today's sales for store 4: ";
    cin >> store4;
    cout << "Enter today's sales for store 5: ";
    cin >> store5;

    //Print out bar chart
    int num_stars;
    cout << "Store 1: ";
    num_stars = store1 / 100.0;
    for( int i = 0; i < num_stars; i++ )
        cout << '*';
    cout << endl;

    cout << "Store 2: ";
    num_stars = store2 / 100.0;
    for( int i = 0; i < num_stars; i++ )
        cout << '*';
    cout << endl;

    cout << "Store 3: ";
    num_stars = store3 / 100.0;
    for( int i = 0; i < num_stars; i++ )
        cout << '*';
    cout << endl;

    cout << "Store 4: ";
    num_stars = store4 / 100.0;
    for( int i = 0; i < num_stars; i++ )
        cout << '*';
    cout << endl;

    cout << "Store 5: ";
    num_stars = store5 / 100.0;
    for( int i = 0; i < num_stars; i++ )
        cout << '*';
    cout << endl;

    return 0;
}


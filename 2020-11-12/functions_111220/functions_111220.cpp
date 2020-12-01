/* 
 * File:   functions_111220.cpp
 * Author: pconrad
 *
 * Created on November 12, 2020, 10:07 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// global constants
const int MIN_VALUE = 1;
const int MAX_VALUE = 6;
const int NUM_VALUES_OUTPUT = 50;

// function prototypes
int my_random();                            // return a random number between MIN_VALUE, and MAX_VALUE
int my_random(int seed);                    // my_random that allows us to specify the seed value instead of time(0)
int my_random(int min, int max);            // my_random allowing us to specify min, max instead of default globals
int my_random(int seed, int min, int max);  // my_random allowing us to specify seed, min and max
double my_random_double();                  // my_random returning a random whole number between 0 and 1

int main(int argc, char** argv) {

    int test_seed;
    
    cout << "Demonstrating my_random()..." << endl;
    for(int count=1; count <=NUM_VALUES_OUTPUT; count++ )
        cout << my_random(test_seed) << " ";
    cout << endl << endl;
    
    cout << "Demonstrating my_random(test_seed)..." << endl;
    cout << "Enter seed value for random number generator: ";
    cin >> test_seed;
    
    for(int count=1; count <=NUM_VALUES_OUTPUT; count++ )
        cout << my_random(test_seed) << " ";
    cout << endl << endl;
    
    int our_min, our_max;
    cout << "Demonstrating my_random(min, max)..." << endl;
    cout << "Enter min and max values for random number generator: ";
    cin >> our_min >> our_max;
    
    for(int count=1; count <=NUM_VALUES_OUTPUT; count++ )
        cout << my_random(our_min, our_max) << " ";
    cout << endl << endl;
    
    cout << "Demonstrating my_random(seed, min, max)..." << endl;
    cout << "Enter test_seed, min and max values for random number generator: ";
    cin >> test_seed >> our_min >> our_max;
    
    for(int count=1; count <=NUM_VALUES_OUTPUT; count++ )
        cout << my_random(test_seed, our_min, our_max) << " ";
    cout << endl << endl;
    
    cout << "Demonstrating double my_random_double()..." << endl;
    
    for(int count=1; count <=NUM_VALUES_OUTPUT; count++ )
        cout << my_random_double() << " ";
    cout << endl;
    return 0;
}
 
// function implementations
int my_random()
{
    /*static bool random_seeded = false;
    if ( !random_seeded )
    {
        srand( time(0) );
        random_seeded = true;
    }
    
    int our_number = rand();    // our_number holds random # between 0 and ~4 billion
    our_number = MIN_VALUE + (our_number % MAX_VALUE);
    return our_number;*/
    return my_random( time(0), MIN_VALUE, MAX_VALUE );
}

// overloaded my_random functions
int my_random(int seed)
{
    /*static bool random_seeded = false;
    if ( !random_seeded )
    {
        srand( seed );
        random_seeded = true;
    }
    
    int our_number = rand();    // our_number holds random # between 0 and ~4 billion
    our_number = MIN_VALUE + (our_number % MAX_VALUE);
    return our_number;*/
    return my_random( seed, MIN_VALUE, MAX_VALUE );
}

int my_random(int min, int max)
{
    /*static bool random_seeded = false;
    if ( !random_seeded )
    {
        srand( time(0) );
        random_seeded = true;
    }
    
    int our_number = rand();    // our_number holds random # between 0 and ~4 billion
    our_number = min + (our_number % (max-min+1) );
    return our_number;*/
    return my_random( time(0), min, max );
}

int my_random(int seed, int min, int max)
{
    static bool random_seeded = false;
    if ( !random_seeded )
    {
        srand( seed );
        random_seeded = true;
    }
    
    int our_number = rand();    // our_number holds random # between 0 and ~4 billion
    our_number = min + (our_number % (max-min+1) );
    return our_number;
}

double my_random_double()
{
    int rand1 = my_random( 10, 100 );
    int rand2 = my_random( rand1, 100 );
    
    return (double)rand1 / (double)rand2;
}
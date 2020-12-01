/* 
 * File:   arrays_7_1_4.cpp
 * Author: pconrad
 *
 * Created on November 19, 2020, 10:18 AM
 */

#include <iostream>
using namespace std;

const int ARRAY_SIZE = 15;

void output_array(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char** argv) {
    
    int a_list[5] = { 100,200,300,400,500 };
    int numbers[ARRAY_SIZE];
    int another_list[] = { 1000,2000,3000,4000,5000,6000 };
    
    // prompt the user for numbers
    for(int i=0; i<ARRAY_SIZE; i++)
    {
        cout << "Enter a value to store in numbers[" << i << "]: ";
        cin >> numbers[i];
    }
    
    cout << "Contents of a_list: ";
    output_array(a_list, 5);
    
    cout << "Your input values: ";
    output_array(numbers, ARRAY_SIZE);
    
    cout << "another_list: ";
    output_array(another_list, 6);
    
    // demonstrate what can happen if we go out of bounds with our array subscripts
    int index, value;
    
    cout << "Enter an index for numbers array and the value to store at the index: ";
    cin >> index >> value;
    
    if ( index >=0 && index < ARRAY_SIZE )
    {
        numbers[index] = value;

        cout << "Contents of a_list: ";
        output_array(a_list, 5);

        cout << "Your input values: ";
        output_array(numbers, ARRAY_SIZE);

        cout << "another_list: ";
        output_array(another_list, 6);
    }
    else
        cout << "You did not enter a valid index, program terminating!" << endl;
    
    return 0;
}


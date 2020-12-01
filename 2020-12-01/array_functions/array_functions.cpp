/* 
 * File:   array_functions.cpp
 * Author: pconrad
 *
 * Created on December 1, 2020, 9:59 AM
 */

#include <iostream>
#include <cmath>
using namespace std;

// function prototypes
// utility function to output array elements
void displayValues(const float arr[], int number_elements);
void inputValues(float arr[], int number_elements); // note: arr is NON-CONST!

// stats functions: minimum, maximum, average, total, standard_dev
float minimum(const float arr[], int number_elements);
float maximum(const float arr[], int number_elements);
float average(const float arr[], int number_elements);
float total(const float arr[], int number_elements);
float standard_dev(const float arr[], int number_elements);

int main(int argc, char** argv) {

    const int ARR_SIZE = 5;
    float float_array[ARR_SIZE];
    
    inputValues(float_array, ARR_SIZE);
    
    cout << "Array contents: ";
    displayValues(float_array, ARR_SIZE);
    
    cout << "Minimum value: " << minimum(float_array, ARR_SIZE) << endl;
    cout << "Maximum value: " << maximum(float_array, ARR_SIZE) << endl;
    cout << "Sum of values: " << total(float_array, ARR_SIZE) << endl;
    cout << "Array average: " << average(float_array, ARR_SIZE) << endl;
    cout << "Standard dev:  " << standard_dev(float_array, ARR_SIZE) << endl;
    
    return 0;
}

// function implementations
// utility function to output array elements
void displayValues(const float arr[], int number_elements)
{
    for(int i=0;i<number_elements;i++)
        cout << arr[i] << " ";
    cout << endl;
}

void inputValues(float arr[], int number_elements) // note: arr is NON-CONST!
{
    for(int i=0; i<number_elements; i++)
    {
        cout << "Enter value for item #" << i+1 << ": ";
        cin >> arr[i];
    }
}

// stats functions: minimum, maximum, average, total, standard_dev
float minimum(const float arr[], int number_elements)
{
    float min = arr[0];
    for(int i=1; i<number_elements;i++)
        if ( arr[i] < min )
            min = arr[i];
    return min;
}

float maximum(const float arr[], int number_elements)
{
    float max = arr[0];
    for(int i=1; i<number_elements;i++)
        if ( arr[i] > max )
            max = arr[i];
    return max;
}

float average(const float arr[], int number_elements)
{
    return total(arr, number_elements) / number_elements;
}

float total(const float arr[], int number_elements)
{
    float sum = arr[0];
    for(int i=1; i<number_elements;i++)
        sum = sum + arr[i]; // sum += arr[i];
    return sum;
}

float standard_dev(const float arr[], int number_elements)
{
    float avg = average(arr, number_elements);
    float variance_sq = pow( avg-arr[0], 2); // initializing variance squared to first array element difference with mean

    for(int i=1;i<number_elements;i++)
        variance_sq = variance_sq + ( pow( avg-arr[i], 2 ) );
    
    return sqrt( variance_sq / number_elements );  // this is population standard deviation
    //return sqrt( variance_sq / (number_elements-1) );  // this is sample standard deviation
}

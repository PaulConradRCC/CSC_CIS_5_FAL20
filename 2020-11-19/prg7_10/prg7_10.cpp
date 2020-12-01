// This program demonstrates the range-based for loop.

#include <iostream>
using namespace std;

/*
void output_array(int a[])
{
    for(int element : a)
        cout << element << " ";
    
    cout << endl;
}
*/

int array_highest(int a[], int size)
{
    int highest = a[0];
    
    for(int i=1; i<size; i++)
        if ( a[i] > highest )
            highest = a[i];
    
    return highest;
}

int array_lowest(int a[], int size)
{
    int lowest = a[0];
    
    for(int i=1; i<size; i++)
        if ( a[i] < lowest )
            lowest = a[i];
    
    return lowest;
}

int main()
{
    // Define an array of integers.
    
    int numbers[] = { 10, 20, 30, 40, 50 };
    
    // Display the values in the array.
    for (int val : numbers)
        cout << val << endl;
    //output_array(numbers);
    
    // demonstrate 7_12
    for(int &val : numbers)
    {
        cout << "Enter a value to place in array: ";
        cin >> val;
    }
    
    // Display the values in the array.
        for (int val : numbers)
        cout << val << endl;
    
    // let's figure out how many elements are in our implicitly declared array
    // with a range based for loop
    int array_size = 0;
    for(int element : numbers)
        array_size++;
    
    cout << "Lowest value in array is: " << array_lowest(numbers, array_size) << endl;
    cout << "Highest value in array is: " << array_highest(numbers, array_size) << endl;
    
    return 0;
}
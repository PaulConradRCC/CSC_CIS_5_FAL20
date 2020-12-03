#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int binarySearch(string a[], int size, string searchValue)
{
    int first=0, last=size-1;
    
    while(first <= last)
    {
        int mid = (first+last)/2;
        
        if (a[mid]==searchValue)
            return mid;
        else if (a[mid] > searchValue)
            last = mid - 1;
        else
            first = mid + 1;
        
        // if (a[mid] < searchValue) // this could just simply be an else statement
        //    first = mid + 1;
    }
    return -1; // if we went through all values and didn't find our search value, return -1
}

bool swap(string &x, string &y)
{
    string temp = y;
    y = x;
    x = temp;
    return true;
}

void bubbleSort(string a[], int size)
{
    bool swapped;    
    
    do
    {
        swapped=false;
        for(int i=0;i<size-1;i++)
        {
            if ( a[i] > a[i+1] )
            {
                swapped = swap(a[i],a[i+1]);
            }
        }
    } while(swapped);
}

void output_array(string a[], int size)
{
    for(int i=0;i<size-1;i++)
        cout << a[i] << ", ";
    cout << a[size-1] << endl;
}

int main(int argc, char** argv) {

    int array_size;
    cout << "How many elements do you want in the array? ";
    cin >> array_size;
    
    // create an array of array_size, of strings
    string my_array[array_size];
    
    for(int i=0;i<array_size;i++)
    {
        cout << "Enter a word for array item #" << i << ": ";
        cin >> my_array[i];
    }
    
    // output the array before sorting.
    cout << "Array content before bubblesort:" << endl;
    output_array(my_array,array_size);
    
    // let's sort the array with bubblesort
    bubbleSort(my_array,array_size);
    
    //output the array after sorting.
    cout << "Array content after bubblesort:" << endl;
    output_array(my_array,array_size);
    
    char choice;
    do
    {    
        // ask user for a value to search for
        string search;
        cout << "Enter a word to find: ";
        cin >> search;

        int found_index = binarySearch(my_array, array_size, search);
        // let's look for it with linear search!!!
        if ( found_index !=-1 )
        {
            cout << "Found the word " << search << " at index " << found_index << endl;
        }
        else
        {
            cout << "Did not find the word " << search << endl;
        }
        
        cout << "Would you like to search for another word (Y/N)? ";
        cin >> choice;
    } while(choice=='Y'||choice=='y');
    
    return 0;
}
#include <iostream>
#include <cstdlib>
using namespace std;

int linearSearch(int a[], int sz, int searchValue)
{
    bool found = false;
    int position=-1, index=0;
    
    while( index < sz && found==false )
    {
        if( a[index]==searchValue)
        {
            found=true;
            position=index;
        }
        index++;
    }
    return position;
}

int main(int argc, char** argv) {

    int array_size;
    cout << "How many elements do you want in the array? ";
    cin >> array_size;
    
    // create an array of array_size, no bounds checking, be careful!!!
    int my_array[array_size];
    
    for(int i=0;i<array_size;i++)
    {
        cout << "Enter an integer for array item #" << i << ": ";
        cin >> my_array[i];
    }
    
    char choice;
    do
    {    
        // ask user for a value to search for
        int search;
        cout << "Enter an integer value to find: ";
        cin >> search;

        int found_index = linearSearch(my_array, array_size, search);
        // let's look for it with linear search!!!
        if ( found_index !=-1 )
        {
            cout << "Found the value " << search << " at index " << found_index << endl;
        }
        else
        {
            cout << "Did not find the value " << search << endl;
        }
        
        cout << "Would you like to search for another value (Y/N)? ";
        cin >> choice;
    } while(choice=='Y'||choice=='y');
    
    return 0;
}


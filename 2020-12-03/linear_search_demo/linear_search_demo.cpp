#include <iostream>
#include <cstdlib>
using namespace std;

int occurrences(int a[], int sz, int searchValue)
{
    int occurrences_found = 0;
    int position=-1, index=0;
    
    while( index < sz )
    {
        if( a[index]==searchValue)
            occurrences_found++;
        index++;
    }
    return occurrences_found;
}

int linearSearch(int a[], int sz, int searchValue, int startingIndex)
{
    // this function exits upon either finding the first occurrence of searchValue
    // starting at the given starting index, or if the value is not found at all.
    bool found = false;
    int position=-1, index=startingIndex;
    
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

int linearSearch(int a[], int sz, int searchValue)
{
    // this function exits upon either finding the first occurrence of searchValue
    // or if the value is not found at all.
    return linearSearch(a,sz,searchValue,0); // let's use the overloaded function with starting index at 0
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
            
            int num_occurrences = occurrences(my_array, array_size, search);
            if ( num_occurrences > 1 )
            {
                int new_index = found_index+1;
                cout << "Found additional occurrence";
                if ( num_occurrences-1 > 1 )
                    cout << "s";
                cout << ":" << endl;
                
                for(int i=new_index; i< array_size; i++)
                {
                    found_index = linearSearch(my_array, array_size, search, new_index);
                    if ( found_index != -1 )
                    {
                        cout << "Found the value " << search << " at index " << found_index << endl;
                        new_index = found_index+1;
                    }
                    else 
                        break; // break out if no additional occurrences are found
                }
            }
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

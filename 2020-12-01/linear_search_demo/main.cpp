#include <iostream>
using namespace std;

int linear_search(int array[], int size_of_array, int search_value)
{
    int iterations = 0; // # of iterations: array[i] == search_value
    int index = -1; // index of search_value, -1 means not found
    for(int i=0;i<size_of_array; i++)
    {
        iterations++;
        if ( array[i] == search_value )
        {
            index = i;
            break;
        }
    }
    cout <<"\t===== linear_search # of iterations done: " << iterations << endl;
    return index;
} // end of linear_search function implementation

int binary_search(int array[], int size_of_array, int search_value)
{
    int iterations=0;
    
    int index = -1;
    int first = 0;
    int last = size_of_array - 1;
    bool found = false;
    
    while ( !found && first <= last )
    {
        int middle = ( first+last )/2;
        iterations++;
        if ( array[middle] == search_value )
        {
            found = true;
            index = middle;
        }
        else if ( array[middle] > search_value )
        {
            last = middle-1;
        }
        else
        {
            first = middle+1;
        }
    } // end of while loop
    cout <<"\t===== binary_search # of iterations done: " << iterations << endl;
    return index;
}

int main(int argc, char** argv) {

    // const int size=18;
    //int test_array[size] = { 1, 2, 4, 5, 7, 9, 10, 12, 14,
    //                         17, 21, 23, 34, 35, 56, 60, 67, 78 };
    const int size=16; // 2 to the 8th power
    int test_array[size];
    
    for(int i=0;i<size;i++)
        test_array[i]=i+1;
    
    //cout << "What value do you want to find? ";
    //int j;
    //cin >> j;
    
    for(int j=0;j<size;j++)
    {
        cout << "Searching for value of " << j << endl;
        int linear_search_found_index = linear_search(test_array,size,j);
        int binary_search_found_index = binary_search(test_array,size,j);

        cout << "linear_search returned the index value of: ";
        cout << linear_search_found_index << endl;

        cout << "binary_search returned the index value of: ";
        cout << binary_search_found_index << endl;
    }
    
    return 0;
}


#include <iostream>
#include <ctime>
#include <cstdlib>
#include <fstream>
using namespace std;

int * shifter(int *a, int size)
{
    int *t = new int[size+1];    
    *t = 0;
    for(int i=0;i<size;i++)
        *(t+i+1)=*(a+i);    
    return t;
}

int * my_random_array(int min, int max, int size)
{
    int *t = new int[size];
    srand(time(0));
    for(int i=0;i<size;i++)
        *(t+i)=min+rand() % (max-min+1);
    
    return t;
}

int main(int argc, char** argv) {

    const int SZ = 25;
    int *a = my_random_array(-100,100,SZ);
    
    for(int i=0;i<SZ;i++)
        cout << a[i] << endl;
    
    ofstream out;
    out.open("randoms.dat",ios::binary); // use a binary file reader/editor such as http://hexed.it to view binary files 
    out.write( (char *)&SZ, sizeof(int));
    out.write( (char *)a, sizeof(int)*SZ);
    out.close();
    cout << "Wrote array to randoms.dat" << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

// function prototypes
void a(int);
void b(int);
void c(int);

int main() {
    cout << "Hello from line #10\n";
    a(2);    
    cout << "Hello from line #12\n";
    return 0;
}

// implementation
void c(int x)
{
    cout << "Hello from line #20\n";
    
    cout << "x=" << x << endl;
    if ( x < 0 ) return;
    b(--x);
}

void b(int x)
{
    cout << "Hello from line #29\n";
    if ( x < 0 ) return;
    c(x);
}

void a(int x)
{
    cout << "Hello from line #36\n";
    b(2*x);
}

/*Function Demo
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

//Prototypes
int GetNumSides();
int GetNumRolls();
int RollDice( int NumSides, int NumRolls );
int RollDie( int NumSides );
void PrintResults( int NumRolls, int NumSides, int Sum );

int main(int argc, char** argv) {
    srand(time(0));

    //User input
    int num_rolls = GetNumRolls();
    int num_sides = GetNumSides();
    
    //Simulate die rolls.
    int sum = RollDice( num_sides, num_rolls );
    cout << "num_sides: " << num_sides << endl;
    cout << "num_rolls: " << num_rolls << endl;

    //Output.
    PrintResults( num_rolls, num_sides, sum );
    
    return 0;
}

int GetNumSides() {
    int n;
    cout << "Enter number of sides: ";
    cin >> n;
    return n;
}

int GetNumRolls() {
    int n;
    cout << "Enter number of rolls on the die: ";
    cin >> n;
    return n;    
}

//RollDice
//Returns the sum of die rolls.
//THe number of rolls & number of die sides is passed in.
int RollDice( int NumSides, int NumRolls ) {
  int sum = 0;
  for( int i = 0; i < NumRolls; i++ )
      sum += RollDie( NumSides );
  cout << endl;
      
  
  return sum;
}

int RollDie( int NumSides ) {
  return rand() % NumSides + 1;   
}

void PrintResults( int NumRolls, int NumSides, int Sum ) {
    if( NumRolls < 1 ) return;    
    
    cout << "The sum of " << NumRolls << " of a " << NumSides
         << "-sided die is " << Sum << endl;
}

// This program takes daily sales figures over a period of time
// and calculates their total.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int days;            // Number of days
   double total = 0.0;  // Accumulator, initialized with 0

   // Get the number of days.
   cout << "For how many days do you have sales figures? ";
   cin >> days;
   
   // Get the sales for each day and accumulate a total.
   for (int count = 1; count <= days; count++)
   {
      double sales;
      cout << "Enter the sales for day " << count << ": ";
      cin >> sales;
      total += sales;   // Accumulate the running total.
   }
   
   cout << "count=" << count << endl;
   
   // while loop "equivalent"
   int count = 1;   // same as for loop initialization of counter variable
   while ( count <= days )  // same as second component of for loop statement
   {
      double sales;
      cout << "Enter the sales for day " << count << ": ";
      cin >> sales;
      total += sales;   // Accumulate the running total.
      count++;          // the update component from the for loop
   }
   
   cout << "count=" << count << endl;
   
   // Display the total sales.
   cout << fixed << showpoint << setprecision(2);
   cout << "The total sales are $" << total << endl;
   return 0;
}
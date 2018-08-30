/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main( )
{
 const double payRATE = 16.79;
 const double overtimeRATE = payRATE * 1.5;
 
 double workHours;
 double overtimeHours;
 
 cout << "\n Enter the amount of workHours you worked this week: \n";
 cin >> workHours;
 cout << "\n Enter the amount of overtime you worked this week: \n";
 cin >> overtimeHours;
 
 double workAmount = payRATE * workHours;
 double overtimeAmount = overtimeRATE * overtimeHours;
 
 double pay  = workAmount + overtimeAmount;
 
 double ss_tax = pay * 0.06;
 double fed_tax = pay * 0.14;
 double state_tax = pay * 0.05;
 
 int dependents;
 
 cout << "\nEnter the amount of dependents at your home: \n";
 cin >> dependents;
 
 if (dependents >= 3)
    pay = pay - 35;
 else
    pay = pay;
 
 pay = pay - (ss_tax + fed_tax + state_tax);
 pay = pay - 10;
 
 double deposit;
 cout << "\n your paycheck will be a total of \n $";
 cout << "$" << pay << " what a ripoff";
 return 0;
}

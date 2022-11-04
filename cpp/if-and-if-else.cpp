#include<iostream>
using namespace std;
int main(){
    const float limit=40.0,overtime_factor(15.0);
   float hourly_rate, // hourly rate of pay
   hours_worked, // hours worked
   wage; // final wage
   // Enter hours worked and hourly rate
   cout << "Enter hours worked: ";
   cin >> hours_worked;
   cout << "Enter hourly_rate: ";
   cin >> hourly_rate;
   // calculate wage
   if (hours_worked <= limit)
        wage = hours_worked * hourly_rate;
  else
       wage = (limit + (hours_worked - limit) * overtime_factor)* hourly_rate;
// Output wage
cout << "Wage for " << hours_worked << " hours at " << hourly_rate << " is " << wage << endl;
   return 0;
}


 

#include <iostream>
using namespace std; 

int main()
{
  double hours = 6;
   double wage = 100;
   double salary = hours ;
   
  cout<<"hours:"<<hours<<"\n";
  cout<<"wage:"<<wage<<"\n";
  salary = hours * wage;
  cout<<"total salary="<<salary ;
}

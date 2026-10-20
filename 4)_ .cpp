#include <iostream>
using namespace std;

int main() 
{
    double mark;
    cout<<"Enter mark(0_100)";
    cin>>mark;
    if(mark >=90)
    {
       cout<<"Excellnt";
    }
   else if(mark >=75 & mark <=89)
    {
      cout<<"very good"; 
    }
    else if(mark >=60 & mark <=74)
    {
      cout<<"good";
    }
    else 
    {
      cout<<"failde";
    }
 }
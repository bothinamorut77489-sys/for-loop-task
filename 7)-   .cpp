#include <iostream>
using namespace std;

int main() 
{
    int age;
    cout<<"Enter age"<<age<<"\n";
    cin>>age;
    if(age >18 & age <60)
    {
      cout<<"permitted";
    }
    else
    {
      cout<<"No permitted";
    }
}
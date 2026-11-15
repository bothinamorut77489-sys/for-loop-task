#include <iostream>
using namespace std;

int main() 
{
    int day;
    cout<<"Enter day(1-7):";
    cin>>day;
    if(day == 6 || day == 7) 
    {
       cout<<"Weekend";
    }
     else
     {
        cout<<"Workday";
     }
}

#include <iostream>
using namespace std;

int main() 
{
    int N;
    int evenCount = 0;
    int oddCount = 0;
    cout<<"Enter N: ";
    cin>>N;

    for(int i = 1; i <= N; i++)
      {
        if (i % 2 == 0)
         {
            evenCount++;
         } else
          {
            oddCount++;
          }
      }

    cout<<"Even numbers = "<<evenCount<<endl;
    cout<<"Odd numbers = "<<oddCount<<endl;
}
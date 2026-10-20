#include <iostream>
using namespace std;

int main()
  {
    int N;
    int totalSum = 0;
    int evenSum = 0;
    int oddSum = 0;
    cout<<"Enter N: ";
    cin>>N;

    for (int i =1; i <=N; i++) 
    {
        totalSum += i;
        if(i % 2 == 0) 
         {
            evenSum += i;
         }
        else
         {
            oddSum += i;
         }
    }
    cout<<"Total Sum = "<<totalSum<<endl;
    cout<<"Even Sum = "<<evenSum<<endl;
    cout<<"Odd Sum = "<<oddSum<<endl;
}

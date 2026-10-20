#include <iostream>
using namespace std;

int main() {
    int N, oddSum = 0;
    cout<<"Enter N:";
    cin>>N;

    for(int i =1; i <=N; i +=2)
     {
        oddSum +=i;
     }

    cout<<"Sum of odd numbers = "<< oddSum<< endl;
}

#include <iostream>
using namespace std;

int main() {
    int N, evenSum = 0;
    cout<<"Enter N:";
    cin>>N;

    for(int i =2; i <=N; i +=2)
     {
        evenSum +=i;
     }

    cout<<"Sum of even numbers = "<< evenSum<< endl;
}

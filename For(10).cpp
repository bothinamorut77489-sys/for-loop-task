#include <iostream>
using namespace std;

int main()
 {
    int num;
    int maxNum;
    cout<<"Input:\n";
    cin>>num;
    maxNum = num;

    for(int i =1; i <=9; i++)
     {
        cin>>num;
        if(num > maxNum)
         {
            maxNum = num;
         }
     }

    cout<<"\nLargest ="<<maxNum<<endl;

}

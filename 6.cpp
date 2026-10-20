#include <iostream>
using namespace std; 

int main()
{
    double grade1, grade2, grade3;
    double sum, average;
    cout << "Enter grade 1: ";
    cin >> grade1;
    cout << "Enter grade 2: ";
    cin >> grade2;
    cout << "Enter grade 3: ";
    cin >> grade3;
    sum = grade1 + grade2 + grade3;
    average = sum / 3;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl; 
}
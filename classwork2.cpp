#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    cout<<"Enter your 1st number ----->";
    cin>> num1;
    cout<<"Enter your 2nd number ----->";
    cin>> num2;

    cout<<" \n";
    cout<<"Before Swap \n";
    cout<<"A: "<<num1;
    cout<<"\nB: "<<num2;


    cout<<" \n";
    double tempvar = num1;
    num1 = num2;
    num2 = tempvar;
    cout<<"After swap\n";
    cout<<"A: "<<num1;
    cout<<"\nB: "<<num2;


}
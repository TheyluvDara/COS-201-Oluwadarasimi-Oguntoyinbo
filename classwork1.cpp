#include <iostream>
using namespace std;

int main(){
    double num1;
    double num2;
    cout<<"Enter your 1st number ----->";
    cin>> num1;
    cout<<"Enter your 2nd number ----->";
    cin>> num2;

    double sum = num1 + num2 ;
    double difference = num1 - num2;
    double product = num1 * num2;

    cout<<"Sum of numbers ---> "<<sum;
    cout<<"\nDifference of numbers ---> "<<difference;
    cout<<"\nProduct of numbers ---> "<< product;
}
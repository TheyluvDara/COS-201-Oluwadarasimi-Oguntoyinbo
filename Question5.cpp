#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"Interest calculation program"<<"\n";
    double principal;
    double interest_rate;
    double time = 1;
    cout<<"Enter starting balance ===> ";
    cin>> principal;
    cout<<"Enter annual interest rate ===> ";
    cin>> interest_rate;
    double balance_after_1yr = (principal * interest_rate * time) / 100 + principal;
    cout<<"Balance after one year = "<< balance_after_1yr;
}
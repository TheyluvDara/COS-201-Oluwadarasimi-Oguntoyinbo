#include <iostream>
using namespace std;

int main(){
    cout<<"Enter Total purchase amount ---> ";
    double amount;
    cin>>amount;
    double saletax = amount * 6/100;
    cout<<" \n";
    cout<<"Sale tax is ---> "<< saletax;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    cout<<"==Hypotenus of a right angled triangle"<<"\n";
    double side_1;
    double side_2;
    cout<<"Enter the length of side1===>"<<"\n";
    cin>> side_1;
    cout<<"Enter the length of side2===>"<<"\n";
    cin>> side_2;
    double hypotenus = sqrt(pow(side_1, 2) + pow(side_2, 2));
    cout<<"the Hypotenus of your triangle is ===> "<< hypotenus;
}
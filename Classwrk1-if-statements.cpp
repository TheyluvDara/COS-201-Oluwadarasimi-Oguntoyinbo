#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a NUmber ==> ";
    int integer;
    cin>> integer;

    if (integer % 5 == 0){
        cout<<"\n HiFive";
    }
    else if( integer % 2 == 0){
        cout<<"\n HiEven";
    }
}
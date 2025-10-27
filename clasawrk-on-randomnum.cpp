#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));

    int number_1 = rand()% 10;
    int number_2 = rand()% 10;


    if ( number_1 < number_2){
        int temp = number_1;
        number_1 = number_2;
        number_2 = temp;
    }
    
    cout<<"\nwhat is "<< number_1<<" - "<< number_2 << "===>";
    int answer = number_1- number_2;
    int user_answer;
    cin>>user_answer;

    if(user_answer == answer){
        cout<<" You are Correct!!!";
    }
    else{
        cout<<"You are wrong!!!";
    }

    return 0;
}



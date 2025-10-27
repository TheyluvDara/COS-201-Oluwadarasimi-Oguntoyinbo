#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {

    srand(time(0));

    string studentName ;
    cout<< "\n"<< "What is your name ===> ";
    getline(cin, studentName);

    bool IsPauStudent;
    cout<< "\n"<< "Are you a student of PAU (0 for False, 1 for True) ===> ";
    cin>> IsPauStudent;
    
    string PauStudent;
    if (IsPauStudent){
        PauStudent = "yes";
    } else {
        PauStudent = "no";
    }

    cout<< "\n";


    cout<< "\n"<< "Here is a list of Courses: "<< "\n";
    cout<< "1. Photography"<< "\n";
    cout<< "2. Painting"<< "\n";
    cout<< "3. Fish Farming"<< "\n";
    cout<< "4. Baking"<< "\n";
    cout<< "5. Public Speaking"<< "\n";

    cout<< "Pick your course by typing (1-5) ==>";
    int courseChoice;
    cin>> courseChoice;

    cout<< "\n";

    cout<< "\n"<< "Here is a list of Accomadations: "<< "\n";
    cout<< "1. Camp House A"<< "\n";
    cout<< "2. Camp House B"<< "\n";
    cout<< "3. Camp House C"<< "\n";
    cout<< "4. Camp House D"<< "\n";
    cout<< "5. Camp House e"<< "\n";

    cout<< "Pick your accommodation by typing (1-5) ==>";
    int accommodationChoice;
    cin>> accommodationChoice;

    string course;
    string studentStatus;
    int days = 0;
    int registration = 0;
    int lodging = 0;

    if (courseChoice == 1 ){
        course = "Photography"; days = 3; registration = 10000;
    } else if(courseChoice == 2){
        course = "Painting"; days = 5; registration = 8000;
    } else if(courseChoice == 3){
        course = "Fish Farming"; days = 7; registration = 15000;
    } else if(courseChoice == 4){
        course = "Baking"; days = 5; registration = 13000;
    }  else if(courseChoice == 5){
        course = "Public Speaking"; days = 2; registration = 5000;
    } else {
        cout<< "\n" << "Wrong option";
    }

    if (accommodationChoice == 1){
        lodging = 10000;
    } else if(accommodationChoice == 2){
        lodging = 2500;
    } else if(accommodationChoice == 3){
        lodging = 5000;
    } else if(accommodationChoice == 4){
        lodging = 13000;
    } else if(accommodationChoice == 5){
        lodging = 5000;
    } else{
        cout<< "\n" << "Wrong option";
    }

    int regfee = 0;
    int lodgingCost = lodging * days;
    int regDiscount = 0;
    int lodgeDiscount = 0;
    string promo;

    if (IsPauStudent && (accommodationChoice == 1 || accommodationChoice == 2)){
        lodgeDiscount = lodgingCost * 0.05;
        lodgingCost = lodgingCost -  lodgeDiscount;
    } else {
        lodgingCost = lodgingCost;
    }

    if (days > 5 || registration > 12000){
        regDiscount = registration * 0.03;
        regfee= registration - regDiscount;
    } else{
        regfee = registration;
    }

    int total = regfee + lodgingCost;
    int randomBonus = rand() % 100;

    if (randomBonus == 7 || randomBonus == 77){
        total = total - 500;
        promo = "500";
    } else {
        promo = "0";
    }

    cout<< "\n";
    cout<< "\n";

    cout<< "Name: " << studentName << "  (Pau student:"<< PauStudent <<") \n";
    cout<< "Course: "<< course << "  Days: "<< days <<"\n";
    cout<< "Registration: ₦"<< registration << "  (reg discount: ₦"<< regDiscount << ") \n";
    cout<< "Lodging: ₦"<< lodging <<" * "<< days << " = ₦" << lodgingCost << "  (lodging discount: ₦"<< lodgeDiscount << ") \n";
    cout<< "Random draw: "<< randomBonus << "  Promo applied: "<< "₦" << promo << "\n";
    cout<< "Total: "<< "₦" << total;

}
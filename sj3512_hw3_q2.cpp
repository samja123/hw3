#include <iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {
    string name, grade;
    int graduation_year, current_year;
    int difference;

    cout<<"Please enter your name: ";
    cin>>name;
    cout<<"Please enter your graduation year: ";
    cin>>graduation_year;
    cout<<"Please enter current year: ";
    cin>>current_year;

    difference = graduation_year - current_year;
    if(difference ==4){
        grade = "a Freshman";
    }
    else if (difference == 3){
        grade = "a Sophomore";
    }
    else if (difference == 2){
        grade = "a Junior";
    }
    else if (difference == 1){
        grade = "a Senior";
    }
    else if (difference <= 0){
        grade = "Graduated";
    }
    else {
        grade = "not in college yet";
    }
    cout<<name<<", you are "<<grade;
    return 0;
}

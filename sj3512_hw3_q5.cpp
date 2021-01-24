#include <iostream>
#include <cmath>
#include <string>

using namespace std;
const double POUNDS_TO_KILOGRAMS = 0.453592;
const double INCHES_TO_METERS = 0.0254;

int main() {
    double weight, height;
    double weight_in_kilograms, height_in_meters;
    double bmi;

    cout<<"Please enter weight (in pounds): ";
    cin>>weight;
    cout<<"Please enter height (in inches): ";
    cin>>height;

    weight_in_kilograms = weight * POUNDS_TO_KILOGRAMS;
    height_in_meters = height * INCHES_TO_METERS;

    bmi = weight_in_kilograms / (height_in_meters * height_in_meters);

    if(bmi < 18.5){
        cout<<"The weight status is: Underweight"<<endl;
    }
    else if(bmi >= 18.5 && bmi < 25){
        cout<<"The weight status is: Normal"<<endl;
    }
    else if(bmi >= 25 && bmi < 30){
        cout<<"The weight status is: Normal"<<endl;
    }
    else{
        cout<<"The weight status is: Obese"<<endl;
    }

    return 0;
}

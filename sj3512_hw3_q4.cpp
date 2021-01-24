#include <iostream>
#include<string>

using namespace std;
const int FLOOR_ROUND = 1;
const int CEILING_ROUND = 2;
const int ROUND = 3;

int main() {
    double real_number;
    int output_number;
    int user_choice;
    cout<<"Please enter a Real number:"<<endl;
    cin>>real_number;
    cout<<"Please choose a rounding method:"<<endl;
    cout<<"1. Floor round"<<endl;
    cout<<"2. Ceiling round"<<endl;
    cout<<"3. Round to the nearest whole number"<<endl;
    cin>>user_choice;
    // casting to an int will always print the whole number that is there
    switch(user_choice){
        case 1:
            if(real_number < 0){
                real_number = real_number * -1;
                real_number = real_number + 1;
                output_number = int(real_number);
                output_number = real_number * -1;
                cout<<output_number<<endl;
            }
            else {
                output_number = int(real_number);
                cout << output_number << endl;
            }
        break;
        case 2:
            if(real_number < 0){
                real_number = real_number * -1;
                output_number = int(real_number);
                output_number = output_number * -1;
                cout<<output_number<<endl;
            }
            else {
                real_number = real_number + 1;
                output_number = int(real_number);
                cout<<output_number<<endl;
            }
        break;
        // by adding .5 if it is closer to the ceiling it will go over then print the whole number that is there
        // if it is closer to floor that number wont switch and will print the current number
        case 3:
            if(real_number < 0){
                real_number = real_number * -1;
                real_number = real_number + .5;
                output_number = int(real_number);
                output_number = output_number * -1;
                cout<<output_number<<endl;
            }
            else{
                real_number = real_number + .5;
                output_number = int(real_number);
                cout<<output_number<<endl;
            }

        break;
    }

    return 0;
}

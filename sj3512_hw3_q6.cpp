#include <iostream>
#include <cmath>
#include <string>

using namespace std;
const int MORNING_CALL_START = 8;
const int NIGHT_CALL_START = 18;
int main() {
    string day;
    int hour24, minutes24,minutes_input;
    char temp;
    double rate, cost;
    cout<<"Please enter the day of the week the call was made in the format Mo, Tu, We, "
          "Th, Fr, Sa or Su: "<<endl;
    cin>>day;
    cout<<"Please enter the time the call started in a 24-hour format: "<<endl;
    cin>>hour24>>temp>>minutes24;
    cout<<"Please enter the length of the call in minutes: "<<endl;
    cin>>minutes_input;

    if(day == "Mo" || day == "Tu" || day == "We" || day == "Th" || day == "Fr"){
        if(hour24 >= MORNING_CALL_START || hour24 <= NIGHT_CALL_START){
            rate = 0.40;
            cost = minutes_input * rate;
            cout<<"Cost of the call was: "<<cost<<" dollars"<<endl;
        }
        else {
            rate = 0.25;
            cost = minutes_input * rate;
            cout<<"Cost of the call was: "<<cost<<" dollars"<<endl;
        }
    }
    else {
        rate = 0.15;
        cost = minutes_input * rate;
        cout<<"Cost of the call was: "<<cost<<" dollars"<<endl;
    }
    return 0;
}

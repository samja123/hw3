#include <iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {
    double a, b, c;
    double x, x1, x2;
    double val; // the val to which everything will be compared against
    cout<<"Please enter a value of a: "<<endl;
    cin>>a;
    cout<<"Please enter a value of b: "<<endl;
    cin>>b;
    cout<<"Please enter a value of c: "<<endl;
    cin>>c;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);

    val = (b * b) - (4 * a * c);
    if((a == 0 && b == 0) && c != 0){
        cout<<"The equation has no solution"<<endl;
    }
    else if(a == 0 && b == 0 && c == 0){
        cout<<"The equation has an infinite number of solutions"<<endl;
    }
    else if(a == 0 && b != 0 && c != 0){
        x = (c * -1) / b;
        cout<<"The equation has one real solution x = "<<x<<endl;
    }
    else if(a == 0 && b != 0 && c == 0){
        x = 0;
        cout<<"The equation has one real solution x = "<<x<<endl;
    }
    else if(val > 0){
        x1 = ((-b) + sqrt(val)) / (2 * a);
        x2 = ((-b) - sqrt(val)) / (2 * a);
        cout<<"The equation has two real solutions x = "<<x1<<" and x = "<<x2<<endl;
    }
    else if (val == 0){
        x = (-b) / (2 * a);
        cout<<"The equation has a single real solution x="<<x<<endl;
    }
    else {
        cout<<"The equation has no real solutions"<<endl;
    }
    return 0;
}

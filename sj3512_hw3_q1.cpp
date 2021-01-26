#include <iostream>
#include<cmath>
#include<string>

using namespace std;

const double BOGO_DISCOUNT = 0.5;
const double CLUB_CARD_DISCOUNT = 0.1;
const int TAX_CONVERSION = 100;

int main() {
    double price1, price2, base_price;
    double long total_price;
    double price_after_bogo, price_after_club_card, price_after_discounts;
    double tax_rate, tax;
    char club_card;
    cout<<"Enter Price of First Item: ";
    cin>>price1;
    cout<<"Enter Price of Second Item: ";
    cin>>price2;
    cout<<"Does customer have a club card? (Y/N): ";
    cin>>club_card;
    cout<<"Enter tax rate, e.g. 5.5 for 5.5% tax: ";
    cin>>tax_rate;
    //Determine base price
    base_price = price1 + price2;
    //Determine bogo price
    if(price1 > price2){
        price_after_bogo = price2 * BOGO_DISCOUNT;
        total_price = price1 + price_after_bogo;
    }
    else {
        price_after_bogo = price1 * BOGO_DISCOUNT;
        total_price = price2 + price_after_bogo;
    }
    //Determine Club card price
    if(club_card == 'y' || club_card == 'Y'){
        price_after_club_card = total_price * CLUB_CARD_DISCOUNT;
        total_price = total_price - price_after_club_card;
    }
    // no else statement needed, since if they do not have a club card the total price will not change
    price_after_discounts = total_price;
    //Determine tax price
    tax_rate = tax_rate / TAX_CONVERSION;
    tax = total_price * tax_rate;
    total_price = total_price + tax;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout<<"Base price: "<<base_price<<endl;
    cout<<"Price after discounts: "<<price_after_discounts<<endl;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(5);
    cout<<"Total price: "<<total_price<<endl;

    return 0;
}

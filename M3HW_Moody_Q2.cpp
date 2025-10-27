// CSC 134
// M3HW1
// Emma Moody
// 12/25/25

#include <iostream>

using namespace std;

int main()
{
    // variables
    double mealPrice;
    int orderType;
    double tax, tip = 0.0, totalAmount;
    const double Tax_rate = 0.05;
    const double Tip_rate = 0.15;

    // meal
    cout << "Please enter the price of the meal: $";
    cin >> mealPrice;

    // order options
    cout << "Is the order for here or to go? Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> orderType;

    // 15% tip
    if (orderType == 1) {
        tip = mealPrice * Tip_rate;
    }

    // tax
    tax = mealPrice * Tax_rate;

    // calc / output
    cout << "the meal price is: $" << mealPrice << endl;
    cout << "Tax is 5%: $" << tax << endl;
    if (orderType == 1) {
        cout << "Tip is 15%: " << tip << endl;
    }else {
        cout << "Tip is 15%: $0.00 (To go)" << endl;
    }
    totalAmount = mealPrice + tax + tip;
    cout << "Total amount: $" << totalAmount << endl;


    return 0;
}
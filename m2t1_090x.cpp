// CSC 134
// M2T1 - Product Sales
// Moody
// 9/28/25
// We're going to make the simplest possible
// "checkout" machine.
#include <iostream>
#include <iomanip> // for the 2 decimal places
using namespace std;

int main() {

    // Set up all the variables
    string first_name, last_name, full_name; // holds customer name 
    string product = "bobas"; // change to whatever you like
    int amount_purchased;
    double cost_each = 1.25;
    double total_cost;

    // Greet the customer
    cout << "Welcome to our " << product << " store!! <3" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name == first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;

    // Ask how much they'd like to purchase
    cout << "How many " << product << " would you like today? ";
    cin >> amount_purchased;

    // Calculate total price
    total_cost = amount_purchased * cost_each;

    // Formatting: Set all prices to 2 decimal places
    cout << setprecision(2) << fixed;

    // Give the result
    cout << "for" << amount_purchased << " " << product << endl;
    cout << "that will be: $" << total_cost << endl;
    cout << "thank you so much for shopping with us!" << endl;


    return 0; // no errors
}

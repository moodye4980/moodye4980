// CSC 134
// M1LAB
// Emma Moody
// 9/16/25

#include <iostream>
using namespace std;
#include <iomanip>

int main()
{
    string name;
    double startingBalance, depositAmount, withdrawalAmount;

    cout << " Question 1 ! " << endl;
    
    // name
    cout << "Enter your name: ";
    cin >> name;

    // starting account balance
    cout << "Enter your starting account balance in dollars: $";
    cin >> startingBalance;

    // amount of deposit
    cout << "Enter the amount you want to deposit in dollars: $";
    cin >> depositAmount;

    // amount of withdrawal
    cout << "Enter the amount you want to withdraw in dollars: $";
    cin >> withdrawalAmount;

    // calculation
    double finalBalance = startingBalance + depositAmount - withdrawalAmount;
    int accountNumber = 23;

    // display information
    cout << "Name of the account: " << name << endl;
    cout << "Account number: " << accountNumber << endl;
    cout << "Final aacount balance: $" << finalBalance << endl;


    // next question based from M2LAB
    cout << "\n Question 2 :) " << endl;
     
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = .52;

    // variables
    double length, width, height, volume, cost, charge, profit;

    // prompt the user for crates length, width, height
    cout << "Enter the dimensions of the crate (in feet): \n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;

    // calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    charge = volume * CHARGE_PER_CUBIC_FOOT;
    profit = charge - cost;

    // display the data
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet \n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;

    cout << "\n Question 3 <3 " << endl;
    
    // variables
    int numPizzas, slicesPerPizza, numVisitors;
    int totalSlices, slicesNeeded, leftoverSlices;

    // amount of pizzahs
    cout << "How many pizzas will you order ";
    cin >> numPizzas;

    // slices per pizzah
    cout << "How many slices per pizza ";
    cin >> slicesPerPizza;

    // how many people
    cout << "How many visitors will come ";
    cin >> numVisitors;

    // cals
    totalSlices = numPizzas * slicesPerPizza;
    slicesNeeded = numVisitors * 2;
    leftoverSlices = totalSlices - slicesNeeded;

    // display
    cout << "\n Total slices of pizza " << totalSlices << endl;
    cout << "Slices needed for visitors " << slicesNeeded << endl;

    if (leftoverSlices >= 0) {
        cout << "Leftover slices of pizza: " << leftoverSlices << endl;
    }
    
    cout << "\n question 4 !!!";

    // the cheerleaderss <3
    
    // variables
    string letsGo, school, team, cheerOne, cheerTwo;
    letsGo = "Let's go";
    team = " Trojans!!d";
    school = " FTCC!";
    cheerOne = letsGo + school;
    cheerTwo = letsGo + team;

    // da cheer
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerOne << endl;
    cout << cheerTwo << endl;

    return 0;


}
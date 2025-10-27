// CSC 134
// M3HW1
// Emma Moody
// 12/25/25

#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome, Agent." << endl;
    cout << "You’ve been deployed on a mission in Lotus. There are two entry points ahead — A site or B site. Where do you go? (Type A or B)" << endl;
    string choice;
    cin >> choice;

    if (choice == "B" || choice == "b") {
        cout << "You push into B site, but there's a Cypher trip waiting for you. It goes off, and before you can react, a Chamber one-taps you. Mission failed. Game over." << endl;
    }

    if (choice == "A" || choice == "a") {
        cout << "You head towards A site, clearing corners like a pro. You plant the spike successfully." << endl;
        cout << "Now you hear footsteps — two enemies are pushing from Tree and one from Heaven." << endl;
        cout << "Do you hold from behind Dice or swing Tree? (Type Dice or Tree)" << endl;
        cin >> choice;

        if (choice == "Tree" || choice == "tree") {
            cout << "You swing Tree with perfect crosshair placement — double headshot! You ace the round and clutch the win. Victory!" << endl;
        } 
        else if (choice == "Dice" || choice == "dice") {
            cout << "You hide behind Dice, but a Sova recon reveals you. The enemies prefire and you’re eliminated. Game over." << endl;
        } 
        else {
            cout << "Invalid choice. You freeze up mid-round, and the enemies defuse the spike. Game over." << endl;
        }
    }

    return 0;
}
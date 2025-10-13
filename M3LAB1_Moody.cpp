// CSC 134
// M3LAB1
// Emma Moody
// 10/11/25

#include <iostream>
using namespace std;

// declaration
void chooseSpike();
void chooseSave();

int main()
{
    // this program follows my favorite game Valorant!
    int choice;
    
    // final round of valorant best to 13, currently 12 - 11
    cout << "⚔️  WELCOME TO VALORANT: MATCH POINT ⚔️" << endl;
    cout << "You're the last agent standing..." << endl;
    cout << "The spike is planted. You have two options:" << endl;
    cout << "Option 1: Push and try to defuse the spike" << endl;
    cout << "Option 2: Save your gun for the next round" << endl;
    cout << "Type 1 or 2: ";

    cin >> choice;

    if (choice == 1) {
        chooseSpike();
    }
    else if (choice == 2) {
        chooseSave();
    }
    else {
        cout << "That's not possible, Agent. Lock in!!" << endl;
    }

    cout << "\nThanks for playing, you worked hard. GG! <3" << endl;

    return 0;
}

// 👇 these go AFTER main
void chooseSpike() {
    cout << "\nYou push onto site..." << endl;
    cout << "You smoke off Heaven and flash into Elbow." << endl;
    cout << "You start the defuse..." << endl;
    cout << "Tick... tick..." << endl;
    cout << "You clutched the round! Defuse successful! For some reason the enemy didn't push!" << endl;
    cout << "‘Clutch!’ – The announcer says. Good job, Agent." << endl;
}

void chooseSave() {
    cout << "\nYou decide to fall back and save." << endl;
    cout << "Your team might flame you, but economy does matter." << endl;
    cout << "As you hide in spawn, you hear the spike explode in the distance." << endl;
    cout << "'Round lost…' but you kept your Phantom. Decent play, Agent." << endl; 
}

// CSC 134
// M5LAB1
// Emma Moody
// 11/16/25

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void investigate_noise_outside();
void look_around_house();

int main(){
    cout << "M5LAB1 - Choose Your Own Adventure " << endl;
    main_menu();
    cout << "Thanks for playing!" << endl;
    return 0;
}

void main_menu() {
    cout << "Main Menu" << endl;
    cout << "You're in front of a spooky old house..." << endl;
    cout << "Do you: " << endl;
    cout << "1. Try the front door" << endl;
    cout << "2. Sneak around back" << endl;
    cout << "3. Forget it, and go home" << endl;
    cout << "4. [Quit]" << endl;
    cout << "Choose: " << endl;
    int choice;
    cin >> choice;
    if (1 == choice) {
        choice_front_door();
      } else if (2 == choice) {
        choice_back_door();
      } else if (3 == choice) {
        choice_go_home();
      } else if (4 == choice) {
        cout << "Ok, quitting game" << endl;
        return; // go back to main()
      } else {
        cout << "That's not a valid choice, please try again." << endl;
        cin.ignore(); // clear the user input
        main_menu();  // try again
      }    
}

void choice_front_door() {
    cout << "Try the front door." << endl;
    cout << "It's locked. " << endl;
    cout << "Do you:" << endl;
    cout << "1. Check around back" << endl;
    cout << "2. Give up and go home" << endl;
    cout << "3. Check the sound coming from the backyard" << endl;
    int choice;
    cout << "Choose: " << endl;
    cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  } else if (3 == choice) {
    investigate_noise_outside();
  }
}
void choice_back_door() {
    cout << "You sneak around back." << endl;
    cout << "The back door is slightly open." << endl;

    int choice = 0;

    while (choice < 1 || choice > 3) {
        cout << "What do you do?" << endl;
        cout << "1. Enter the house" << endl;
        cout << "2. Look around the yard" << endl;
        cout << "3. Run home" << endl;
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            look_around_house();
        }
        else if (choice == 2) {
            investigate_noise_outside();
        }
        else if (choice == 3) {
            choice_go_home();
        }
        else {
            cout << "Invalid choice, try again." << endl;
        }
    }
}

void choice_go_home() {
    cout << "You leave the adventure behind and go home." << endl;
    cout << "Your mom asks why you're back so early." << endl;
}

// NEW STORY BRANCH #1
void explore_shed() {
    cout << "You find a small shed in the yard and open the door." << endl;
    cout << "Inside you find an old toolbox and a weird glowing key." << endl;
    cout << "You're not sure what it unlocks, but it feels important..." << endl;
}

// NEW STORY BRANCH #2
void check_window() {
    cout << "You walk up to a dusty window and peek inside." << endl;
    cout << "You see movement, but you can't tell what it is." << endl;
    cout << "A chill runs down your spine." << endl;
}

void investigate_noise_outside() {
    int choice = 0;

    cout << "You hear a strange noise coming from behind the house." << endl;

    while (choice < 1 || choice > 3) {
        cout << "Do you:" << endl;
        cout << "1. Check out the basement door" << endl;
        cout << "2. Look inside the window" << endl;   // uses new branch!
        cout << "3. Explore the shed" << endl;         // uses new branch!
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            cout << "You open the basement door and step inside..." << endl;
            cout << "You find a hidden room full of old gold coins!" << endl;
        }
        else if (choice == 2) {
            check_window();
        }
        else if (choice == 3) {
            explore_shed();
        }
        else {
            cout << "Invalid input. Try again." << endl;
        }
    }
}

void look_around_house() {
    cout << "You step inside the house." << endl;
    cout << "It's empty, dusty, and feels abandoned." << endl;
    cout << "You leave." << endl;
}

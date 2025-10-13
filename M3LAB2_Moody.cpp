// CSC 134
// M3LAB2 - Number Grade to Letter Grade Conversion Program
// Emma Moody
// 10/11/25

#include <iostream>
using namespace std;

int main() {
    int grade;

    // Prompt user for grade
    cout << "Enter your numerical grade: ";
    cin >> grade;

    // Determine and show the grades
    if (grade >= 90 && grade <= 100) {
        cout << "Your letter grade is: A" << endl;
    } else if (grade >= 80 && grade <= 89) {
        cout << "Your letter grade is: B" << endl;
    } else if (grade >= 70 && grade <= 79) {
        cout << "Your letter grade is: C" << endl;
    } else if (grade >= 60 && grade <= 69) {
        cout << "Your letter grade is: D" << endl;
    } else if (grade >= 0 && grade <= 59) {
        cout << "Your letter grade is: F" << endl;
    } else {
        // else
        cout << "that won't work, please enter a value between 0 and 100." << endl;
    }
}




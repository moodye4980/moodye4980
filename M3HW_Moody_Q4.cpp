// CSC 134
// M3HW1
// Emma Moody
// 12/25/25

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    // two single digit #s
    int num1 = rand() % 10;
    int num2 = rand() % 10;

    int correctAnswer = num1 + num2;

    // solve
    cout << "What is " << num1 << " plus " << num2 << endl;
    int answer;
    cin >> answer;

    if (answer == correctAnswer) {
        cout << "Correct" << endl;
    }else {
        cout << "Incorrect" << endl;
    }

    return 0;
}
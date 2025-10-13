// CSC 134
// M3T1
// Emma Moody
// 10/11/25

#include <iostream>

using namespace std;

int main()
{
    // declare our variables
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    // ask for user input
    cout << "Please enter the width and height of the first" << endl;
    cout << "reactangle, seperated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the second" << endl;
    cout << "reactangle, seperated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    // calculate answer
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    // display results
    cout << "Rectangle one has area of " << areaOne << endl;
    cout << "Rectangle two has area of " << areaTwo << endl;


    return 0;
}
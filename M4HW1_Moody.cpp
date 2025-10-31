// CSC 134
// M4HW1
// Emma Moody
// 10/31/25

#include <iostream>
using namespace std;

int main() 
{
    int num;
    
    while (true)
    {
        cout << "Enter a number from 1-12" << endl;
        cin >> num;
        if (num >= 1 && num <= 12)
        {
            break;
        }
        else
        {
            cout << "Invalid input, enter a number between 1-12" << endl;
        }
    }

    int i = 1;
    while (i <= 12)
    {
        cout << num << " times " << i << " is " << num * i << endl;
        i++;
    }
    
    return 0;
}
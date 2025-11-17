// CSC 134
// M5T2
// Emma Moody
// 11/16/25

#include <iostream>
using namespace std;

void printResult(int number, int result)
{
    cout << number << " squared= " << result << endl;
}

int square(int number)
{
    int result;
    result = number * number;
    return result;
}

int main() 
{
   int count = 1;
   int result;

   while (count <= 10)
   {
    result = square(count);
    printResult(count, result);
    count++;
   }

   return 0;
}
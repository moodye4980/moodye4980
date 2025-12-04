// M6T1
// CSC 134
// Emma Moody
// 12/04/25

#include <iostream>
#include <string>
using namespace std;

// voidd
void part1();
void part2();


int main() {
    part1();
    part2();

    return 0;
}


// Part 1 

void part1() {
    cout << "Part 1: Loop Only";
    cout << "Enter the number of cars passing each day.\n";
    cout << "(Day 0 = Monday, Day 4 = Friday)\n";

    const int SIZE = 5;
    int count = 0;
    int cars_today = 0;
    int cars_total = 0;
    double cars_avg = 0;

    while (count < SIZE) {
        cout << "Cars on Day " << count << ": ";
        cin >> cars_today;

        cars_total += cars_today;
        count++;    
    }

    cout << "Total = " << cars_total << endl;
    cars_avg = (double) cars_total / SIZE;
    cout << "Average = " << cars_avg << endl;
}


// Part 2 – array version

void part2() {
    cout << "\n--- Part 2: Array Version ---\n";

    const int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"};
    int cars[SIZE];         
    int cars_total = 0;
    double cars_avg = 0.0;

    
    for (int i = 0; i < SIZE; i++) {
        cout << "# cars on " << days[i] << ": ";
        cin >> cars[i];
    }


    cout << "Day\tCars\n";

    
    for (int i = 0; i < SIZE; i++) {
        cout << days[i] << "\t" << cars[i] << endl;
        cars_total += cars[i];
    }

    // avg
    cars_avg = (double) cars_total / SIZE;

    cout << "Total = " << cars_total << endl;
    cout << "Average = " << cars_avg << endl;
}
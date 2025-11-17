// CSC 134
// M5LAB2
// Emma Moody
// 11/16/25

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{	
   double length, width, area;  
          
   length = getLength();
   
   width = getWidth();
   
   area = getArea(length, width);
   
   displayData(length, width, area);
          
   return 0;
}

double getLength() {
    double length;
    cout << "Enter rectangle length: " << endl;
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "Enter rectangle width: " << endl;
    cin >> width;
    return width;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "rectangle data:" << endl;
    cout << "Length: " << length << endl;
    cout << "width: " << width << endl;
    cout << "area: " << area << endl;

}
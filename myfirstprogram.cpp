//imports header files
#include <iostream>
using namespace std;

//main function where all code is written
int main(){
    //cout used to print output
    cout << "Hello World! \\ \t";
    //\n for new line \n\n to skip a space then have a new line
    cout << "Have a good day \n \n";

    cout << 3 << "\n";
    /*endl also used to start on a new line
    \t is used to skip a tab space*/
    cout << 3 + 3 << endl;
    cout << 2 * 5 << "\n";

    //declaring variables
    int myNum = 15;
    double myFloat = 5.99;
    char myLetter = 'D';
    string myText = "Hello";
    bool myBoolean = true;

    cout << myText << " I am " << myNum << " years old. \n";

    //adding two variables
    int x = 5;
    int y = 6;
    int sum = x + y;
    cout << x << " + " << y << " = " << sum << "\n";

    int a, b, c;
    a = b = c = 50;
    cout << a + b + c << "\n \n";

    //use const to declare read-only or unchangeable variables
    const int minutesPerHour = 60;
    cout << minutesPerHour << "\n";

    //REAL LIFE EXAMPLE
    //Student Data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    //Print variables
    cout << "Student ID: " << studentID << "\n";
    cout << "Student Age: " << studentAge << "\n";
    cout << "Student Fee: " << studentFee << "\n";
    cout << "Student Grade: " << studentGrade << "\n \n";

    //AREA OF A RECTANGLE
    //Create integer variables
    int length = 4;
    int width = 6;

    //Calculate the area
    int area = length * width;
    cout << "Length is: " << length << "\n";
    cout << "Width is: " << width << "\n";
    cout << "Area of the rectangle is: " << area << "\n \n";

    //User input
    //SIMPLE CALCULATOR
    int e, f;
    int sum1;
    cout << "Type a number: ";
    cin >> e;
    cout << "Type another number: ";
    cin >> f;
    sum1 = e + f;
    cout << "Sum is: " << sum1;
    return 0;
}
#include <iostream>
using namespace std;

#include <string>

int main(){
    if (20 > 18){
        cout << "20 is greater than 18" << "\n";
    }

    //program to determine if a number is greater than or less than the other
    int x;
    cout << "Enter a number x: ";
    cin >> x;
    int y;
    cout << "Enter a number y: ";
    cin >> y;

    if (x > y) {
        cout << "x is greater than y"  << "\n";
    } else if (x == y){
        cout << "x and y are equal"  << "\n";
    } else {
        cout << "y is greater than x"  << "\n";
    }

    //short hand if...else (ternary operation)
    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening.";
    cout << result << "\n";
    //alternatively;
    /* cout << ((time < 18)) ? "Good day." : "Good evening."; */

    //nested ternary operation
    int time1 = 22;
    string message = (time < 13) ? "Good morning."
        : (time < 18) ? "Good afternoon."
        : "Good evening";
    cout << message << "\n";

    //nested if - check if a condition is true after a first condition is also true
    int a = 15;
    int b = 25;
    if (a > 10){
        cout << "a is greater than 10\n";

        if (b > 20){
            cout << "b is also greater than 20\n";
        }
    }

    //REAL LIFE EXAMPLE
    //Checking citizen's voting age
    int age = 20;
    bool isCitizen = true;

    if (age >= 18){
        cout << "Old enough to vote.\n";
        if (isCitizen){
            cout << "And you are a citizen, so you can vote!\n";
        } else {
            cout << "But you must be a citizen to vote.\n";
        }
    } else {
        cout << "Not old enough to vote\n";
    }

    //logical operators in conditions
    int d = 100;
    int e = 33;
    int f = 500;
    //using &&
    if (d > e && f > d){
        cout << "Both conditions are true.\n";
    }
    //using ||
    if (d > e || d >f){
        cout << "At least one condition is true.\n";
    }
    //using !
    if (!(e > d)){
        cout << "e is NOT greater than d.\n";
    }

    //REAL LIFE EXAMPLE
    //Security system
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3; //1 = highest

    if (isLoggedIn && (isAdmin || securityLevel <= 2)){
        cout << "Access granted.\n";
    } else {
        cout << "Access denied.\n";
    }
    /*if logged in and is admin - granted
    if logged in, is admin and security level < 2 - granted
    if logged in, not admin, security level is 3 or 4 - denied
    if logged in, is admin, security level is 1, 2, 3, 4 - granted*/

    //Opening a door if user enters a correct code
    int doorCode = 1337;

    if (doorCode == 1337){
        cout << "Correct code.\nThe door is now open.\n";
    } else {
        cout << "Wrong code.\nThe door remains closed.\n";
    }

    //If a number is positive or negative
    int myNum = 10;

    if (myNum > 0){
        cout << "The value is a positive number.\n";
    } else if (myNum < 0){
        cout << "The value is a negative number.\n";
    } else {
        cout << "The value is 0.\n";
    }

    //If a number is even or odd
    int num1 = 5;

    if (num1 % 2 == 0){
        cout << num1 << " is even.\n";
    } else {
        cout << num1 << " is odd.\n";
    }

    return 0;
}
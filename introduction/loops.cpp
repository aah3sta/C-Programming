#include <iostream>
using namespace std;

#include <string>
#include <cmath>

int main (){
    //while loop
    int i = 0;
    while (i < 5){
        cout << i << "\n";
        i++;
    }

    //COUNTDOWN EXAMPLE
    int countdown = 3;
    while (countdown > 0){
        cout << countdown << "\n";
        countdown--;
    }
    cout << "Happy New Year!!\n";

    //do while loop - executes code block once before checking if the condition is true
    int e = 0;
    do {
        cout << e << "\n";
        e++;
    }
    while (e < 5);

    //condition is false from the start
    int j = 10;
    do {
        cout << "j is " << j << "\n";
        j++;
    }
    while (j < 5);
    //the do/while loop runs once then checks the condition which is false, and stops

    //REAL LIFE EXAMPLE
    //User enters positive number continuously. When number is negative, program stops.
    int number;
    do{
        cout << "Enter a positive number: ";
        cin >> number;
    } while (number >0);

    //Printing even numbers only
    int k = 0;
    while (k <= 10) {
        cout << k << "\n";
        k += 2;
    }

    //while loop to reverse numbers
    int numbers = 12345;
    int revNumbers = 0;

    while (numbers){
        //get the last number of numbers and add it to revNumbers
        revNumbers = revNumbers * 10 + numbers % 10;
        //remove the last number of numbers
        numbers /= 10;
    }
    cout << "Reversed numbers: " << revNumbers << "\n";

    //while loop combined with an if else statement
    int dice = 1;
    while (dice <= 6){
        if (dice < 6){
            cout << "No Yatzy\n";
        } else {
            cout << "Yatzy!\n";
        }
        dice = dice + 1;
    }

    //FOR loop
    for (int a = 0; a < 7; a++){
        cout << a << "\n";
    }

    //sum of numbers in the loop
    int sum = 0;
    for (int b = 1; b <=4; b++){
        sum = sum + b;
        cout << "The sum is: " << sum << "\n";
    }

    //countdown using for loop
    for (int c = 3; c > 0; c--){
        cout << c << "\n";
    }
    cout << "HAPPY NEW YEAR!\n";

    return 0;
}
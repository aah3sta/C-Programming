#include <iostream>
using namespace std;

#include <string>

int main(){
    string greeting = "Hello and welcome!";
    cout << greeting << "\n";

    //string concatenation
    string firstName = "Esther";
    string lastName = "Oyoo";

    //printing without concatenating
    cout << "We print this as usual: " << firstName << " " << lastName << "\n";

    //concatenating with a +
    string fullName = firstName + " " + lastName;
    cout << "We concatenate using + then print: " << fullName << "\n";

    //appending
    string fullName1 = firstName.append(lastName);
    cout << "We append then print: " << fullName1 << "\n";

    //string length
    string txt = "abcdefghijklmnopqrstuvwxyz";
    cout << "The length of the txt string is: " << txt.length() << "\n";
    //alteratively, you can use size
    cout << "The size of the txt string is: " << txt.size() << "\n";

    //accessing the characters in the string
    string myString = "Hello";
    cout << myString[0] << "\n"; //outputs H

    //to print the last character of a string
    cout << myString[myString.length() -1] << "\n";

    //to change the value of a character
    myString[4] = 'p';
    cout << myString << "\n";

    //the at() function
    cout << myString.at(0); //first character
    cout << myString.at(1); //second character
    cout << myString.at(myString.length() -1) << "\n";

    //special characters
    string txt1 = "We are the so-called \"Vikings\" from the north. It\'s us!";
    cout << txt1 << "\n";

    //user input strings
    /*
    string name;
    cout << "Type your first name: ";
    cin >> name; //only prints the first word given, none after the whitespace
    cout << "Your name is " << name << "\n";
    */

    //using getline()
    string myName;
    cout << "Type your full name: ";
    getline (cin, myName);
    cout << "Your name is: " << myName;

    //C-style strings
    char greeting2[] = "Hello" ;

    return 0;
}




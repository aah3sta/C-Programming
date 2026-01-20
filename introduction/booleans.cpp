#include <iostream>
using namespace std;

#include <string>

int main(){
    bool isCodingFun = true;
    bool isFishBad = false;

    cout << isCodingFun << "\n"; //outputs 1(true)
    cout << isFishBad << "\n"; //outputs 0(false)

    //using boolalpha to enable printing of true/false
    cout << boolalpha; 
    cout << isCodingFun << "\n"; //outputs true
    cout << isFishBad << "\n"; //outputs false

    //resetting with noboolalpha
    cout << noboolalpha;
    cout << isCodingFun << "\n"; //outputs 1
    cout << isFishBad << "\n"; //outputs 0

    //boolean expressions
    int x = 10;
    int y = 9;
    cout << (x > y) << "\n"; //returs 1(true)
    cout << (x == 10) << "\n";
    cout << (x == 15) << "\n"; //returns 0

    //DETERMINING VOTING AGE
    int myAge;
    int votingAge = 18;

    cout << "Enter your age: ";
    cin >> myAge;

    cout << boolalpha;
    if (myAge >= votingAge) {
        cout << "Old enough to vote!";
    } else {
        cout << "Not old enough to vote," << "\n" ;
    }

    return 0;
}
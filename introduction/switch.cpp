#include <iostream>
using namespace std;

#include <string>

int main(){
    int day;
    cout << "Enter a number between 1-7: ";
    cin >> day;
    
    switch (day){
        case 1:
            cout << "Monday\n";
            break;
        case 2:
            cout << "Tuesday\n";
            break;
        case 3:
            cout << "Wednesday\n";
            break;
        case 4:
            cout << "Thursday\n";
            break;
        case 5:
            cout << "Friday\n";
            break;
        case 6:
            cout << "Saturday\n";
            break;
        case 7:
            cout << "Sunday\n";
            break;
        default:
            cout << "Looking forward to the weeekend.\n"; //runs if there is no case match
    }
    //outputs "Thursday" (day 4)

    return 0;
}
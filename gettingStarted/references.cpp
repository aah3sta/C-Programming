#include <iostream>
#include <string>
using namespace std;

int main (){
    //used as an alias for an existing variable
    string food = "Pizza";
    string &meal = food;

    meal = "Burger"; //updates both meal and food

    cout << food << "\n";
    cout << meal << "\n";

    cout << &food; //outputs memory address of food variable

    return 0;
}
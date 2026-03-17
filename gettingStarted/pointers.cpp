#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){
    // * - dereference operator
    // & - address of the operator
    string name = "Oyoo";
    int age = 20;
    string freePizzas[5]{"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;

    //prints the address of name
    cout << pName << "\n";

    //prints the value accessed by the pointer
    cout << *pName << "\n";
    cout << *pAge << "\n";
    cout << pFreePizzas << "\n"; //array is already an address. gives the address of the array
    cout << *pFreePizzas << "\n"; //gives first element in array
    return 0;
}
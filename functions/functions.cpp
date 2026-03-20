#include <iostream>
#include <string>
using namespace std;

void myFunction(){
    cout << "I just got executed!\n";
}

//parameters - fname is a parameter. this has multiple parameters
void myFunct(string fname, int age){
    cout << fname << " Oyoo. " << age << " years old. \n";
}

//default parameter value - executed if no arguement is provided when the function is called
void countryFunction(string country = "Kenya"){
    cout << country << "\n";
}

//return keyword
int myNumber(int x, int y){
    return y + x;
}

int main(){
    myFunction();
    
    myFunct("Liam", 7);// liam is an arguement
    myFunct("Jenny", 20);
    myFunct("Anja", 25);

    countryFunction("Tanzania");
    countryFunction("Uganda");
    countryFunction();
    
    int z = myNumber(3, 4);
    cout << z;
    return 0;
}
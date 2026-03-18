#include <iostream>
#include <string>
using namespace std;

void myFunction(){
    cout << "I just got executed!\n";
}

//parameters - fname is a parameter
void myFunct(string fname){
    cout << fname << " Refsnes\n";
}

int main(){
    myFunction();
    
    myFunct("Liam");// liam is an arguement
    myFunct("Jenny");
    myFunct("Anja");
    
    return 0;
}
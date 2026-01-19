#include <iostream>
using namespace std;

#include <string>

int main(){
    //Arithmetic operators
    int sum1 = 100 + 50;
    int sum2 = sum1 +250;
    int sum3 = sum2 + sum2;

    int z = 5;
    ++z;
    cout << z << "\n";
    --z;
    cout << z << "\n";

    //Real life example
    //COUNTING PEOPLE
    int peopleInRoom = 0;

    //3 people enter
    peopleInRoom++;
    peopleInRoom++;
    peopleInRoom++;

    cout << "The number of people in the room is: " << peopleInRoom << "\n";

    //1 person leaves
    peopleInRoom--;

    cout <<"The number of people in the room is: " << peopleInRoom << "\n";

    //Assignment operators
    int e = 10;
    e += 5; //same as e = e + 5
    cout << e << "\n";

    //Comparison operators
    //CHECKING VOTING AGE
    int age = 18;
    cout << (age >= 18) << "\n" ;
    cout << (age < 18) << "\n" ;

    //Logical operators
    /* Logical and && 
    Logical or ||
    Logical not !*/
    
    return 0;
}
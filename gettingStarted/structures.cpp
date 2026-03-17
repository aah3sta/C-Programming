#include <iostream>
#include <string>
using namespace std;

int main(){
    //structures can store different data types
    struct{
        int myNum; //member - int variable
        string myString; //member - string variable
    } myStructure; //structure variable name

    //assigning values to the structure
    myStructure.myNum = 1;
    myStructure.myString = "Hello world!";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";

    //one structure, many variables
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; //multiple variables

    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << " " << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << " " << "\n";

    //named structures
    struct car { //structure named car
        string brand1;
        string model1;
        int year1;
    };

    struct student {
        string name;
        int age;
        char grade;
    };

    student student1;
    student1.name = "Esther";
    student1.age = 20;
    student1.grade = 'A';

    cout << "These are the student's details:\n" << "Name: " << student1.name << "\nAge: " << student1.age << "\nGrade: " << student1.grade;

    
    return 0;
}
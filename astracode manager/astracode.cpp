#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct member_details{
    string name;
    string university;
    int age;
};

int add_member(){
    member_details member;
    cout << "WELCOME TO ASTRACODE COMMUNITY!\n";
    cout << "Kindly enter your details.\n";
    cout << "Enter Full Name: ";
    cin >> member.name;

    cout << "\n" << "Age: ";
    cin >> member.age;

    cout << "\n" << "University Name: ";
    cin >> member.university;
}
 
int main(){
    add_member();
    return 0;
}
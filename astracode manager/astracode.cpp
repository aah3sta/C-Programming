#include <iostream>
#include <string>
#include <vector>
using namespace std;

int header_image(){
    string logo = R"(  /$$$$$$              /$$                         /$$$$$$                  /$$          
 /$$__  $$            | $$                        /$$__  $$                | $$          
| $$  \ $$  /$$$$$$$ /$$$$$$    /$$$$$$  /$$$$$$ | $$  \__/  /$$$$$$   /$$$$$$$  /$$$$$$ 
| $$$$$$$$ /$$_____/|_  $$_/   /$$__  $$|____  $$| $$       /$$__  $$ /$$__  $$ /$$__  $$
| $$__  $$|  $$$$$$   | $$    | $$  \__/ /$$$$$$$| $$      | $$  \ $$| $$  | $$| $$$$$$$$
| $$  | $$ \____  $$  | $$ /$$| $$      /$$__  $$| $$    $$| $$  | $$| $$  | $$| $$_____/
| $$  | $$ /$$$$$$$/  |  $$$$/| $$     |  $$$$$$$|  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$$
|__/  |__/|_______/    \___/  |__/      \_______/ \______/  \______/  \_______/ \_______/
                                                                                         
                                                                                         
)";
    cout << logo << "\n";
    cout << "------------------------------------------------\n";
    cout << "  Initializing AstraCode Management System...  \n";
    cout << "------------------------------------------------\n" << "\n";
}

struct member_details{
    string name;
    string university;
    int age;
};

int add_member(){
    member_details member;
    cout << "Kindly enter your details.\n";
    cout << "Enter Full Name: ";
    cin >> member.name;

    cout << "Age: ";
    cin >> member.age;

    cout << "University Name: ";
    cin >> member.university;
}

/*
int display_members(){

}

int search_member(){

}
*/
 
int main(){
    header_image();
    add_member();
    return 0;
}
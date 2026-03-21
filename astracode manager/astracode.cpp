#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

//code for header image
int header_image(){
    string logo = R"(   _____            __                _________            .___      
  /  _  \   _______/  |_____________  \_   ___ \  ____   __| _/____  
 /  /_\  \ /  ___/\   __\_  __ \__  \ /    \  \/ /  _ \ / __ |/ __ \ 
/    |    \\___ \  |  |  |  | \// __ \\     \___(  <_> ) /_/ \  ___/ 
\____|__  /____  > |__|  |__|  (____  /\______  /\____/\____ |\___  >
        \/     \/                   \/        \/            \/    \/                                                                                          
)";
    cout << logo << "\n";
    cout << "------------------------------------------------\n";
    cout << "  Initializing AstraCode Management System...  \n";
    cout << "------------------------------------------------\n" << "\n";
}

//adding member details structure and function
struct member_details{
    string name;
    string university;
    int age;
};

int add_member(){
    member_details member;
    cout << "Kindly enter member details.\n";
    cout << "Enter Full Name: ";
    cin.ignore();
    getline(cin, member.name);

    cout << "Age: ";
    cin >> member.age;

    cout << "University Name: ";
    cin.ignore();
    getline(cin, member.university);

    fstream member_db("astracode.txt", ios::app);

    if (member_db.is_open()){
    member_db << member.name << " | ";
    member_db << member.age << " | ";
    member_db << member.university << " | ";

    member_db.close();
    cout << "Member added successfully.\n";

    } else {
        cout << "Error! Could not open database file!.\n";
    }
}

//exiting the program
int close_program(){
    cout << "Thank you for choosing AstraCode!\n";
    EXIT_SUCCESS;
}

//code that executes when app runs
int user_options(){
    //give user options.
    cout << R"(WELCOME TO THE ASTRACODE COMMUNITY MANAGEMENT SYSTEM!
    Kindly select a number to proceed.
    1. Add a member
    2. Display member details
    3. Search member
    4. Delete member
    5. Exit
    )";

    int user_choice;
    cin >> user_choice;

    if (user_choice >= 1 && user_choice <=5){
        cout << "Selection successful!\n";
        switch (user_choice)
        {
        case 1:
            add_member();
            break;
        case 5:
            close_program();
            break;
        default:
            break;
        }
    } else {
        cout << "Enter a valid number!\n ";
        user_options();
    }
}


/*
//display saved members
int display_members(){
    fstream  member_db("astracode.txt");    
}
int search_member(){
}
*/
 
int main(){
    //Display astracodeimage
    header_image();
    //display user options and run program
    user_options();

    return 0;
}
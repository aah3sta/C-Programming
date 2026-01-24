#include <iostream>
using namespace std;

#include <string>
#include <cmath>
#include <vector>

int main(){
    string cars[5] = { "Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    int myNum[5] = {10, 20, 30, 40, 50};

    //accessing elements in an array
    cout << cars[0] << "\n";
    cout << myNum[2] << "\n";

    //changing an array element
    cars[0] = "Opel";
    cout << cars[0] << "\n";

    //looping through an array
    for(int i = 0 ; i < 5; i++){
        cout << cars[i] << "\n";
        //index of each element together with its value
        cout << i << " = " << cars[i] << "\n";
    }

    //using the foreach loop
    for (int num : myNum){
        cout << num << "\n";
    }

    for (string car : cars){
        cout << car << "\n";
    }

    //declaring an array without specifying the elements. This is a fixed-size array
    string vehicles [2];
    vehicles[0] = "Tesla";
    vehicles[1] = "Ford";

    //get the size of an array in bytes
    cout << "The size of this array is " << sizeof(vehicles) << "\n";

    //find out how many elements an array has
    int getArrayLength = sizeof(vehicles) / sizeof(vehicles[0]);
    cout << "The length of this array is " << getArrayLength << "\n";

    //vectors are the resizable arrays
    vector<string> names = {"Esther", "Morgan", "Grace"};

    //adding an element to the vector
    names.push_back("Barbie");    

    return 0;
}
#include <iostream>
using namespace std;

#include <string>
#include <cmath>

int main(){
    /*int sum = 0;
    int numbers[] {1, 2, 3, 4};
    for(int number : numbers){
        sum = sum + number;
    }
    cout << "The sum is: " << sum << "\n";
    */
   
   //declare size of array
    int size = 4;
    //allocate dynamic memory
    int* numbers = new int[size];
    int sum = 0;

    cout << "Enter " << size << " numbers.\n";

    //input numbers into array
    for(int i = 0; i < size; i++){
        cout << "Number " << i+1 << ": \n";
        cin >> numbers[i];
        sum += numbers[i];
    }
    cout << "The sum is: " << sum << "\n";
    //deallocate memory
    delete[] numbers;
    
    return 0;
}
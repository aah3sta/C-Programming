//MULTIDIMENTIONAL ARRAYS
#include <iostream>
using namespace std;

#include <string>
#include <cmath>

int main (){
    //A 2-Dimensional array
    string letters [2][4]{
        { "A", "B", "C", "D" },
        { "E", "F", "G", "H" }
    };
    cout << letters[0][2] << "\n";

    //changing elements
    letters[0][0] = "Z";
    cout << letters[0][0] << "\n";

    //looping through it
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){
            cout << letters [i][j] << "\n";
        }
    }

    //REAL LIFE EXAMPLE
    //'1' indicates there is a ship
    bool ships[4][4] = {
        { 0, 1, 1, 0 },
        { 0, 0, 0, 0 },
        { 0, 0, 1, 0 },
        { 0, 0, 1, 0 }
    };
    //track how many hits the player has
    int hits = 0;
    int numberOfTurns = 0;
    //Allow player to keep going till they have hit 4 ships
    while (hits < 4){
        int row, column;
        cout << "Selecting coordinates\n";

        //ask player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;
        //ask player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        //check if a ship exists in those coordinates
        if (ships[row][column]){
            //remove the ship by setting the value to 0
            ships[row][column] = 0;
            //increase the hit counter
            hits++;
            cout << "Hit! " << (4-hits) << " left.\n\n";
        } else {
            cout << "Miss\n\n";
        }
        numberOfTurns++;
    }
    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    bool ship[4][4] = 
    {
    {0, 1, 0, 0},
    {0, 0, 1, 0},
    {1, 1, 0, 0},
    {0, 0, 0, 0}
    };
    int hits = 0, numberofturns = 0;

    cout << "\nWelcome to Battleship!\n" 
        << "\nYour goal is to known down four ships by guessing their coordinates.\n";

    while (hits < 4)
    {
        int row, column;
        
        cout << "\nPick a row between 0 and 3.\n";
        cin >> row;
        
        cout << "Pick a column between 0 and 3.\n";
        cin >> column;

        if (ship[row][column]) 
        {
            ship[row][column] = 0;
            hits++;
            if (hits == 3) cout << "\nHit!\n" << "\nOnly 1 ship left!\n";
            else if (hits == 4) cout << "\nHit!\n";
            else cout << "\nHit!\n" << "\nYou have " << 4 - hits 
            << " ships left.\n";
        }
        else 
        {
            if(hits == 3) cout << "\nMiss.\n" << "\nYou still have one ship left.\n";
            else cout << "\nMiss.\n" << "\nYou have " << 4 - hits 
            << " ships left.";
        }
        numberofturns++;
    }
    
    if (numberofturns == 4) cout << "\nWow!!! You knocked down all four ships"
    << " without a single miss! Impressive!\n";
    else if (numberofturns >= 12) cout << "\nTook you quite a while but you" 
    << " were able to all four ships in " << numberofturns <<  " turns.\n";
    else cout << "\nGood job! You knocked down all four ships in " 
    << numberofturns << " turns.\n";
    
    return 0;
}

    
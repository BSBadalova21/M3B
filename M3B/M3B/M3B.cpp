#include <iostream>
#include "Menu.h"
#include "Information.h"
#include "SecondGame.h"
#include "ThirdGame.h"
#include "textFiles.h"

using namespace std;

int tempArrChoose;
int arrChoose[50];

void CheckInput()
{
    for (int i = 0; i < 50; i++)
    {
        cin >> arrChoose[i];
        if (arrChoose[i] <= 0) {   //Checks if the input is correct
            cout << "Incorrect input. Please input number between 1 and 3.";
        }
        else if (arrChoose[i] > 3) {
            cout << "Incorrect input. Please input number between 1 and 3.";
        }
        else
        {
            if (arrChoose[i] == 1)
            {
                tempArrChoose = arrChoose[i];
                break;
            }
            tempArrChoose = arrChoose[i];

            break;
        }
    }
}

int main()
{
    nameOfTheGame();
    chooseGame();

    CheckInput();

    switch (tempArrChoose) // Switching the games
    {
    case 1: // 1.Information
    {
        system("cls");
        info();
        dna();
        informationText();
        dna();
    } break;
    case 2: // 2.Replication
    {
        system("cls");
        replication();
        secondGame();
    } break;
    case 3: // 3.Biology Crossing
    {
        thirdGame();
    } break;
    }
}


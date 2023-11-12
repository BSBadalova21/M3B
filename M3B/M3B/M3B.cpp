#include <iostream>
#include "Menu.h"
#include "Information.h"
#include "firstGame.h"
#include "secondGame.h"
#include "textFiles.h"

using namespace std;

int tempArrChoose;
int arrChoose[50];

void checkInput()
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

    checkInput();

    switch (tempArrChoose) // Switching the games
    {
    case 1: // 1.Information
    {
        system("cls");
        info();
        dna();
        informationText();
        dna();
        int check;
        cout << "If you want to go back to the main menu type '1'." << endl;
        cin >> check;
        if (check == 1)
        {
            system("cls");
            main();
        }

    } break;
    case 2: // 2.Replication
    {
        system("cls");
        replication();
        firstGame();
        int check;
        cout << "If you want to go back to the main menu type '1'." << endl;
        cin >> check;
        if (check == 1)
        {
            system("cls");
            main();
        }
    } break;
    case 3: // 3.Biology Crossing
    {
        secondGame();
        int check;
        cout << "If you want to go back to the main menu type '1'." << endl;
        cin >> check;
        if (check == 1)
        {
            system("cls");
            main();
        }
    } break;
    }
}


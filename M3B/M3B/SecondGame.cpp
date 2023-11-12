#include "SecondGame.h"

int diffChoose[50];
int tempDiffChoose;

void secondGame()
{
    cout << "1. Easy" << endl;
    cout << "2. Medium" << endl;
    cout << "3. Hard" << endl;
    cout << "Choose your difficulty: ";
    for (int j = 0; j < 50; j++)
    {
        cin >> diffChoose[j];
        if (diffChoose[j] <= 0) {
            cout << "Wrong input.Try again." << endl;
        }
        else if (diffChoose[j] > 3) {
            cout << "Wrong input.Try again." << endl;
        }
        else {
            tempDiffChoose = diffChoose[j];
            break;

        }
    }

    switch (tempDiffChoose) // switching the difficulty
    {
    case 1: // Game : Replication | Difficulty : Easy
    {
        int points = 0;
        char* answer = new char[3];
        char basesEasy[3] = { 'G', 'A', 'C' };
        cout << "Your job is to pair perfectly the RNA to the DNA Matrix." << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << basesEasy[i] << " "; // Outputs the DNA Matrix.
        }
        cout << " | Write the  Nucleotide Bases properly." << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> answer[i];  // Inputs the RNA Matrix as an answer.
        }
        cout << endl;
        for (int i = 0; i < 3; i++) // For loop for checking if the DNA and RNA Matches also adding points if it's correct.
        {
            if (answer[i] == 'C' && basesEasy[i] == 'G')
            {
                points++;
            }
            else if (answer[i] == 'U' && basesEasy[i] == 'A')
            {
                points++;
            }
            else if (answer[i] == 'G' && basesEasy[i] == 'C')
            {
                points++;
            }
        }
        if (points == 1)   // Outputs the reward.
            thirdPlace();
        else if (points == 2)
            secondPlace();
        else if (points == 3)
            firstPlace();

        delete[] answer;

    }break;
    case 2:  // Game : Replication | Difficulty : Medium
    {
        int points = 0;
        char* answer = new char[5];
        char basesMedium[5] = { 'A', 'C', 'A', 'G', 'C' };
        cout << "Your job is to pair perfectly the RNA to the DNA Matrix." << endl;


        for (int i = 0; i < 5; i++)
            cout << basesMedium[i] << " "; // Outputs the DNA Matrix.

        cout << " | Write the  Nucleotide Bases properly." << endl;

        for (int i = 0; i < 5; i++)
            cin >> answer[i];   // Inputs the RNA Matrix as an answer.

        cout << endl;
        for (int i = 0; i < 5; i++) // For loop for checking if the DNA and RNA Matches also adding points if it's correct.
        {
            if (answer[i] == 'C' && basesMedium[i] == 'G')
                points++;

            else if (answer[i] == 'U' && basesMedium[i] == 'A')
                points++;

            else if (answer[i] == 'G' && basesMedium[i] == 'C')
                points++;
        }
        if (points == 1 || points == 2)   // Outputs the reward.
            thirdPlace();

        else if (points == 3 || points == 4)
            secondPlace();

        else if (points == 5)
            firstPlace();

        delete[] answer;

    }break;
    case 3:
    {
        int points = 0;
        char* answer = new char[7];
        char basesHard[7] = { 'G', 'A', 'C', 'A', 'G', 'C', 'A' };
        cout << "Your job is to pair perfectly the RNA to the DNA Matrix." << endl;


        for (int i = 0; i < 7; i++)
            cout << basesHard[i] << " "; // Outputs the DNA Matrix.

        cout << " | Write the  Nucleotide Bases properly." << endl;

        for (int i = 0; i < 7; i++)
            cin >> answer[i];   // Inputs the RNA Matrix as an answer.

        cout << endl;
        for (int i = 0; i < 7; i++) // For loop for checking if the DNA and RNA Matches also adding points if it's correct.
        {
            if (answer[i] == 'C' && basesHard[i] == 'G')
                points++;

            else if (answer[i] == 'U' && basesHard[i] == 'A')
                points++;

            else if (answer[i] == 'G' && basesHard[i] == 'C')
                points++;
        }
        if (points <= 1)
            cout << "You are not good enough!";
        else if (points == 2 || points == 4) {   // Outputs the reward.
            thirdPlace();
            dna();
        }
        else if (points == 5 || points == 6) {
            secondPlace();
            dna();
        }
        else if (points == 7) {
            firstPlace();
            dna();
        }
        delete[] answer;
    }break;
    }

}
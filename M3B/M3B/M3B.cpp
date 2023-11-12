#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

int diffChoose[50];
int arrChoose[50];
int tempDiffChoose;
int tempArrChoose;


void nameOfTheGame()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\nameOfTheGame.txt", ios::in); //open a file to perform read operation using file object
    if (newfile.is_open()) { //checking whether the file is open
        string tp;
        while (getline(newfile, tp)) { //read data from file object and put it into string.
            cout << setw(135) << tp << endl; //print the data of the string
        }
        newfile.close(); //close the file object.
    }
}

void info()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\info.txt", ios::in); 
    if (newfile.is_open()) { 
        string tp;
        while (getline(newfile, tp)) { 
            cout << setw(135) << tp << endl; 
        }
        newfile.close();
    }
}

void replication()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\replication.txt", ios::in);
    if (newfile.is_open()) {
        string tp;
        while (getline(newfile, tp)) {
            cout << setw(135) << tp << endl;
        }
        newfile.close();
    }
    
}
void game3()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\biology.txt", ios::in);
    if (newfile.is_open()) {
        string tp;
        while (getline(newfile, tp)) {
            cout << setw(135) << tp << endl;
        }
        newfile.close();
    }
}

void firstPlace()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\1stPlace.txt", ios::in); 
    if (newfile.is_open()) {
        string tp;
        while (getline(newfile, tp)) { 
            cout << tp << endl; 
        }
        newfile.close();
    }
}

void secondPlace()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\2ndPlace.txt", ios::in);
    if (newfile.is_open()) {
        string tp;
        while (getline(newfile, tp)) {
            cout << tp << endl;
        }
        newfile.close();
    }
}
void thirdPlace()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\3rdPlace.txt", ios::in);
    if (newfile.is_open()) {
        string tp;
        while (getline(newfile, tp)) {
            cout << tp << endl;
        }
        newfile.close();
    }
}

void dna()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\dna.txt", ios::in);
    if (newfile.is_open()) {
        string tp;
        while (getline(newfile, tp)) {
            cout << tp << endl;
        }
        newfile.close();
    }
}
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
     
    switch ( tempDiffChoose ) // switching the difficulty
    {
        case 1: // Game : Replication | Difficulty : Easy
        {
        int points = 0;
        char* answer = new char[3];
        char basesEasy[3] = { 'G', 'A', 'C' };
        cout << "Your job is to pair perfectly the RNA to the DNA Matrix." << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << basesEasy[i] << " ";
        }
        cout << " | Write the  Nucleotide Bases properly." << endl;
        for (int i = 0; i < 3; i++)
        {
            cin >> answer[i];
        }
        cout << endl;
        for (int i = 0; i < 3; i++)
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
        if (points == 1)   // Rewards
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

        }
    }
    
}
void thirdGame()
{
    system("cls");
    game3();
    int countOne = 0, countTwo = 4, countRight = 0;
    int j = 0;
    string dyhib[] = { "AB","aB","Ab","ab","ab","aB","AB","Ab" };
    while (j != 2)
    {
        if (countRight == 4)
        {
            break;
        }
        /* Ecology crossing */
        {
            cout << "Your time starts now!(Hurry up!! Your Time is 10 seconds!)\n-----------------------------------------------------------------------\n\n";
            for (int i = 1; i <= 4; i++)
            {
                srand(time(0));
                cout << "Question:" << endl << dyhib[countOne] << " x " << dyhib[countTwo] << " = ";
                string numInput;
                time_t start = time(0);
                int y = 5;
                while (!_kbhit())
                {
                    if (abs(time(0) - start) > 10)
                    {
                        j = 1;
                        break;
                    }
                }
                if (j == 1)
                {
                    cout << "Time's Up!!";
                    j = 2;
                }
                else
                {
                    cin >> numInput;
                    if ((time(0) - start) > 10)
                    {
                        cout << "Time's Up!!";
                        j = 2;
                    }
                    else if (i == 1)
                    {
                        if (numInput == "AaBb")
                        {
                            cout << "Good Job!!!\n\n";
                            countRight++;
                        }
                        else
                        {
                            cout << "Wrong Answer!!" << endl << "Unfortunately you don't win a medal. :(";
                            j = 2;
                        }
                    }
                    else if (i == 2)
                    {
                        if (numInput == "aaBB")
                        {
                            cout << "Good Job!!!\n\n";
                            countRight++;
                        }
                        else
                        {
                            cout << "Wrong Answer!!" << endl << "Unfortunately you don't win a medal. :(";
                            j = 2;
                        }
                    }
                    else if (i == 3)
                    {
                        if (numInput == "AABb")
                        {
                            cout << "Good Job!!!\n\n";
                            countRight++;
                        }
                        else
                        {
                            cout << "Wrong Answer!!" << endl << "Unfortunately you don't win a medal. :(";
                            j = 2;
                        }
                    }
                    else if (i == 4)
                    {
                        if (numInput == "Aabb")
                        {
                            cout << "Good Job!!!\n\n";
                            countRight++;
                        }
                        else
                        {
                            cout << "Wrong Answer!!" << endl << "Unfortunately you don't win a medal. :(";
                            j = 2;
                        }
                    }
                }
                countOne++;
                countTwo++;
                if (j == 2) break;
            }
        }
    }
    if (countRight == 4)
    {
        cout << endl << "YOU HAVE WON THE GAME!" << endl << "HERE'S YOUR MEDAL!" << endl;
        firstPlace();
    }


    
}

void informationText() {
    cout << endl;
    cout << endl;
    cout << "DNA Info:" << endl;
    cout << "A - T (Adenine - Thymine)" << endl;
    cout << "G - C (Guanine - Cytosine)" << endl;
    cout << endl;
    cout << endl;
    cout << "RNA Info:" << endl;
    cout << "A - U (Adenine - Uracil)" << endl;
    cout << "G - C (Same as DNA)" << endl;
    cout << endl;
    cout << endl;
}



int main()
{
    nameOfTheGame();

    cout << endl;
    cout << endl;
    cout << "1. Information" << endl;
    cout << "2. Replication (Game)" << endl;
    cout << "3. Biology Crossing (Game)" << endl;
    cout << "Choose your game: ";

    for (int i = 0; i < 50; i++)
    {
        cin >> arrChoose[i];
        if (arrChoose[i] <= 0) {
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

    


    switch (tempArrChoose) // switching the games
    {
    case 1:
    {
        system("cls");
        info();
        dna();
        informationText();
        dna();
    } break;
    case 2:
    {
        system("cls");
        replication();
        secondGame();
    } break;
    case 3:
    {
        thirdGame();
    } break;
    }
}
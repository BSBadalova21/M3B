#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>

using namespace std;

void welcome()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\welcome.txt", ios::in); //open a file to perform read operation using file object
    if (newfile.is_open()) { //checking whether the file is open
        string tp;
        while (getline(newfile, tp)) { //read data from file object and put it into string.
            cout << setw(170) << tp << endl; //print the data of the string
        }
        newfile.close(); //close the file object.
    }
}

void info()
{
    fstream newfile;

    newfile.open("..\\..\\textFiles\\info.txt", ios::in); //open a file to perform read operation using file object
    if (newfile.is_open()) { //checking whether the file is open
        string tp;
        while (getline(newfile, tp)) { //read data from file object and put it into string.
            cout << setw(170) << tp << endl; //print the data of the string
        }
        newfile.close(); //close the file object.
    }
}

int main()
{
    welcome();
    int diffChoose[50];
    int arrChoose[50];
    int tempDiffChoose;
    int tempArrChoose;
    cout << endl;
    cout << endl;
    cout << "1. Information" << endl;
    cout << "2. Replication (Game)" << endl;
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
            cout << "1. Easy" << endl;
            cout << "2. Medium" << endl;
            cout << "3. Hard" << endl;
            cout << "Choose your difficulty: ";
            for (int j = 0; j < 50; j++)
            {
                cin >> diffChoose[j];
                if (diffChoose[j] <= 0){
                    cout << "Wrong input. Please input number between 1 and 3.";
                }
                else if (diffChoose[j] > 3) {
                    cout << "Wrong input. Please input number between 1 and 3.";
                }
                else {
                    tempDiffChoose = diffChoose[j];
                    break;

                }
            }
            break;
        }
    }

    


    switch (tempArrChoose) // switching the games
    {
    case 1:
    {
        system("cls");
        info();

        cout << "DNA Info:" << endl;
        cout << "A - T (Adenine - Thymine)" << endl;
        cout << "G - C (Guanine - Cytosine)" << endl;
        cout << endl;
        cout << endl;
        cout << "RNA Info:" << endl;
        cout << "A - U (Adenine - Uracil)" << endl;
        cout << "G - C (Same as DNA)";
    } break;
    case 2:
    {
        switch (tempDiffChoose) // switching the difficulty
        {
        case 1:
        {
            cout << "test";
        }
        }
    }
    case 3:
    {
        int countOne = 0, countTwo = 4;
        int j;
        string dyhib[] = { "AB","aB","Ab","ab","ab","aB","AB","Ab" };
        while (true)
        {
            j = 0;
            /* Introduction : */
            {
                cout << setw(100) << "YOU HAVE ENTERED" << endl << setw(100) << "ECOLOGY CROSSING" << endl;
                cout << "Your are currently a/n: Beginner Biologist" << endl;
            }
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
                            }
                            else
                            {
                                cout << "Wrong Answer!!";
                                j = 2;
                            }
                        }
                        else if (i == 2)
                        {
                            if (numInput == "aaBB")
                            {
                                cout << "Good Job!!!\n\n";
                            }
                            else
                            {
                                cout << "Wrong Answer!!";
                                j = 2;
                            }
                        }
                        else if (i == 3)
                        {
                            if (numInput == "AABb")
                            {
                                cout << "Good Job!!!\n\n";
                            }
                            else
                            {
                                cout << "Wrong Answer!!";
                                j = 2;
                            }
                        }
                        else if (i == 4)
                        {
                            if (numInput == "Aabb")
                            {
                                cout << "Good Job!!!\n\n";
                            }
                            else
                            {
                                cout << "Wrong Answer!!";
                                j = 2;
                            }
                        }
                    }
                    countOne++;
                    countTwo++;
                }
            }
        }
        if (j == 2) break;
    }
    }
}
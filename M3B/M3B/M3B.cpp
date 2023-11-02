#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

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

int main()
{
    welcome();

    int arrChoose[50];
    int counter;
    int tempChoose;
    cout << endl;
    cout << endl;
    cout << "Choose your game: ";

    for (int i = 0; i < 50; i++)
    {
        cin >> arrChoose[i];
        if (arrChoose[i] <= 0) {
            cout << "Incorrect input. Please input number between 1 to 3.";

        }
        else if (arrChoose[i] > 3) {
            cout << "Incorrect input. Please input number between 1 to 3.";

        }
        else
        {
            tempChoose = arrChoose[i];
            break;
        }
    }
    cout << tempChoose;
}
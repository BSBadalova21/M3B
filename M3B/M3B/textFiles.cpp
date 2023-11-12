#include "textFiles.h"


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
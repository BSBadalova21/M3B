#include "secondGame.h"

void secondGame()
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
        /* Biology crossing */
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
                    cout << endl << "Time's Up!!";
                    j = 2;
                }
                else
                {
                    cin >> numInput;
                    if ((time(0) - start) > 10)
                    {
                        cout << endl << "Time's Up!!";
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
                            cout << "Wrong Answer!!" << endl << "Unfortunately you don't win a medal. :(" << endl;
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
                            cout << "Wrong Answer!!" << endl << "Unfortunately you don't win a medal. :(" << endl;
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
                            cout << "Wrong Answer!!" << endl << "Unfortunately you don't win a medal. :(" << endl;
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
                            cout << "Wrong Answer!!" << endl << "Unfortunately you don't win a medal. :(" << endl;
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
// do while.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main()
{   
    int score = 1;

    while (score > 0) {
        srand(time(0));
        int secretnum = 1 + (rand() % 9
            );
        int guess{};
        cout << "Guess a number between 0 and 10!" << endl;
        cout << "Enter guess: " << endl;
        int guessCnt = 0;
        int guesslimit = 5;
        bool outofguess = false;
        while (secretnum != guess && !outofguess) {
            if (guessCnt < guesslimit) {
                cin >> guess;
                if (guess != secretnum) {
                    cout << "Wrong answer. Enter new guess: " << endl;
                    if ((guess != secretnum) && (guessCnt == 3)) {

                        cout << "Last chance! " << endl;
                    }


                }


                guessCnt++;
            }
            else {
                (outofguess = true);


            }
        }
        if (outofguess == !true) {
            score++;

            cout << "YOU WIN!                                                                                                                                                                                                                score: " << score << endl;

        }
        else {
            score--;
            cout << "You lose                                                                                                                                                                                                                score: " << score << endl;
        }



        if (score == 0) {
            cout << "Game Over\n";
        }
        if (score == 5) {
            cout << "WOW! You are lucky! Heres an extra point..." << endl;
            cout << "+1 point" << endl;
            score++;

        }if (score == 10) {
            cout << "Are you cheating?! Heres an extra point for the effort..." << endl;
            cout << "+1 point";
            score++;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

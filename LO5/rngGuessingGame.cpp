#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{

    // Providing a seed value
    srand((unsigned)time(NULL));
    int random = rand() % 10 + 1;
    int inputRandom = random;
    int guess;
    int i;
    bool win;

    cout << "          Guess Game"
         << "\n          **********\n"
         << "\nYou will get three chances to guess the number. \n"
         << "\nGuess a number in between 1 and 10. \n";

    // looping the question 3 times.
    for (int i = 1; i <= 3; i++)
    {
        cout << "this is guess number " << i << " : ";
        cin >> guess;
        cout << endl;

        if (guess == inputRandom)
        {
            win = true;
            cout << "You Won!";
            break;
        }
        else
        {
            cout << "You Lost!\n";
        }
        if (guess >= 11)
        {
            cout << "This number is too high!\n";
        }
        else if (guess <= 0)
        {
            cout << "This number is too low!\n";
        }
    }
    cout << endl
         << "Correct Number is : " << inputRandom;
    


    return 0;
}

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Potential improvement: Handling floating point numbers
int main()
{
    // Providing a seed value based on time to generate a unique set of random numbers every instance
    srand((unsigned)time(NULL));
    int lowerLimit = 1;
    int upperLimit = 10;
    int random = rand() % upperLimit + lowerLimit;
    int winningNumber = random;
    int guess;
    int guessCounter = 1;
    string inputString = "";

    cout << "          Guess Game"
         << "\n          **********\n"
         << "\nYou will get three chances to guess the number. \n"
         << "\nGuess a number in between " << lowerLimit << " and " << upperLimit << ". \n";

    while (true)
    {
        cout << "This is guess #" << guessCounter << ": ";
        cin >> inputString;

        try {
            guess = stoi(inputString);
        } catch (const std::exception& e) {
            cout << "Your input was not a number within the range. Try a number between 1-10.\n";
            continue;
        }

        if (guess == winningNumber) {
            cout << "Congratulations, you won! Thanks for playing!";
            break;
        } else if (guessCounter == 3) {
            cout << endl
                 << "Sorry, wrong guess. Correct number is: " << winningNumber
                 << endl
                 << "You have reached the limit! Thanks for playing!";
            break;
        }

        if (guess >= upperLimit + 1) {
            cout << "Sorry, wrong guess. Your number is bigger than 10. Try a number between 1-10.\n";
            continue;
        } else if (guess <= lowerLimit - 1) {
            cout << "Sorry, wrong guess. Your number is smaller than 1. Try a number between 1-10.\n";
            continue;
        } else {
            cout << "Sorry, wrong guess. Try again!\n";
            guessCounter++;
        }   
    }

    return 0;
}

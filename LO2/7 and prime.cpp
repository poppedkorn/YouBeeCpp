#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;

// I have made a function to check if the number is a prime number.
bool isPrime(int a) {
    if (a <= 1) {
        return false;
    }
    for (int b = 2; b <= a/2; b++) {
        if (a % b == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int inputStartingNumber, inputFinalNumber;
    int multiple = 7;
    int primeCount = 0;

    cout << "Enter starting number: ";
    cin >> inputStartingNumber;
    cout << "Enter final number: ";
    cin >> inputFinalNumber;

    // Assigning the starting input for both questions
    int sevenStartingNumber = inputStartingNumber;
    int sevenFinalNumber = inputFinalNumber;

    cout << "\nNumbers divisible by " 
         << multiple 
         << " from " 
         << sevenStartingNumber 
         << " to " 
         << sevenFinalNumber 
         << "\n******************************\n";
    // this is the loop that also stops all numbers that aren't divisable by 7.
    for (sevenStartingNumber; sevenStartingNumber <= sevenFinalNumber; sevenStartingNumber++) {
        if (sevenStartingNumber % multiple == 0) {
            cout << sevenStartingNumber; 
            if (sevenStartingNumber <= sevenFinalNumber - multiple) {
                cout << ", ";
            }
        }
    }

    int primeStartingNumber = inputStartingNumber;
    int primeFinalNumber = inputFinalNumber;
    float latestPrimeNumber = NAN;
    cout << "\n\nPrime Numbers\n*************\n";
    cout << "Prime list between (" 
         << inputStartingNumber 
         << " and " << inputFinalNumber 
         << "):";
    for (primeStartingNumber; primeStartingNumber <= primeFinalNumber; primeStartingNumber++) {
        if (isPrime(primeStartingNumber) == true) {
            primeCount++;
            if (std::isnan(latestPrimeNumber) == true) {
                latestPrimeNumber = primeStartingNumber;
                continue;
            }
            cout << latestPrimeNumber;
            latestPrimeNumber = primeStartingNumber; 
            if (primeStartingNumber <= primeFinalNumber) {
                cout << ", ";
            }
        }
    }
    cout << latestPrimeNumber 
         << "\n" 
         << "Total number of prime numbers from (" 
         << inputStartingNumber << " and " 
         << inputFinalNumber 
         << "):" 
         << primeCount;
    
    return 0;
}


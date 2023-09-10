#include <iostream>
#include <cmath>
#include <string>
using namespace std;



int main() {
     // setting all the starting values to 0
    int customerNumber = 0;
    int unitsConsumed = 0;
    int amount = 0;
    string customerName;

     // outputting the questions and taking in the answers
    cout << "Auckland Power - Customer Bill Generator\n\n" 
         << "********************************************\n\n";
    cout << "Enter customer name : ";
    cin >> customerName;
    cout << "Enter customer number : ";
    cin >> customerNumber;
    cout << "Enter consumed units : ";
    cin >> unitsConsumed;
    cout << "\nAuckland power - customer bill" 
         << "\n******************************\n\n";
    amount = (unitsConsumed - 300) * 1 + (100* 0.80) + (100 *0.50) + 100*0.30;

     // printing out the answers after they have been put through the equation above
    cout << "Customer number : " 
         << customerNumber << "\n\n"
         << "Customer name : " 
         << customerName << "\n\n"
         << "Units consumed : " 
         << unitsConsumed << "\n\n"
         << "Amount : " 
         << amount 
         << "\n\n******************************";

    return 0;
}

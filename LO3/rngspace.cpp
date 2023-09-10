#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	srand((unsigned) time(NULL));
	int randomEven = 0, randomOdd = 0;
	cout << "Random numbers between 10 to 20" 
		 << "\n*****************************************\n";
	for(int i=1; i<=6; i++){
		// rand() % range + startingNumber
		// range = length({ 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }) = 11
		// startingNumber = 10
		int random = rand() % 11 + 10;
		cout << random; 
		if (random % 2 == 0) {
			randomEven++;
		} else {
			randomOdd++;
		}
		if (i != 6) {
			cout << ", ";
		}
	}
	cout << "\nNumber of even numbers in the list: " 
		 << randomEven;
	cout << "\nNumber of odd numbers in the list: " 
		 << randomOdd;
	return 0;
}


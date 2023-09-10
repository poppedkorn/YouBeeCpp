#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c,determinant; 
    double positiveXValue, negativeXValue;

    // the user input will determine the output of the equation.
    cout << "Enter a, b, c  ";              
    cin >> a >> b >> c;

    // this is defining the (b^2-4ac) as a seperate vairable.
    determinant = pow(b, 2) - 4*a*c;        
    positiveXValue = (-b + sqrt(determinant))/2*a;     
    negativeXValue = (-b - sqrt(determinant))/2*a; 

    cout << "\n";
    // using the else if function to seperate all 3 outcomes that the equation can have.
    if (determinant < 0) {
        cout << "Roots are imaginary";
    }
    else if (determinant == 0) {
        cout << "Roots are real and equal"; 
    }
    else {
        cout << "Roots are real and unequal";
    }

    cout << "\n"
         << "  x1= "   
         << positiveXValue 
         << "   x2= " 
         << negativeXValue;

    return 0;
}

/* Ive tested all 3 outcomes, 
I used a= 1 b= -5 c= -14 to solve for x1= 7 and x2= -2 for real and unequal. 
I used a= 10 b= 1 c= 10 for x1= nan x2= nan for roots are imaginary. 
I used a= 1  b= 10 c= 25 for x1= -5 x2= -5 for roots are real and equal */
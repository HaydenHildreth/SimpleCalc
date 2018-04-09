#include <iostream>
#include <string>

using namespace std;

int main()
{
    //Number for Calculations
    int arithmeticMethod;
    cout << "1: Addition\n2: Subtraction\n3: Multiplication\n4: Division" << endl;
    cout << "Enter the number for the operation you would wish to do: ";
    cin >> arithmeticMethod;
    
    //Numbers for Arithmetic
    float numberOne;
    float numberTwo;    
    cout << "Please enter your first number: ";
    cin >> numberOne;
    cout << "Please enter your second number: ";
    cin >> numberTwo;

    if (arithmeticMethod == 1) {
        cout << "The sum of your numbers is " << numberOne + numberTwo;
    }
    else if (arithmeticMethod == 2) {
        cout << "The difference of your numbers is " << numberOne - numberTwo;
    }
    else if (arithmeticMethod == 3) {
        cout << "The product of your numbers is " << numberOne * numberTwo;
    }
    else if (arithmeticMethod == 4) {
        cout << "The quotient of your numbers is " << numberOne / numberTwo;
    }
    else{
        cout << "Please enter a valid number.";
    }
    
    return 0;
}

#include <iostream>

using namespace std;

int main(){
    int userNum1, userNum2;
    int difference, divisionResult, remainder;

    cout << "Enter the first number: ";
    cin >> userNum1;
    
    cout << "Enter the second number: ";
    cin >> userNum2;

    //Calculates if num1 can divide num2
    if (userNum2 != 0){
        if (userNum1/userNum2 != 0 && userNum1%userNum2 == 0) {
            cout << userNum1 << " is divisible by " << userNum2 << "." <<endl;
        }
        else {
            cout << userNum1 << " is not divisible by " << userNum2 << "." <<endl;
        }
    }
    else {
        cout << "Cannot divide by 0. " << userNum1 << " is not divisible by " << userNum2 << "." <<endl;
    }

    //Calculates if num2 can divide num1
    if(userNum1 != 0){
        if (userNum2/userNum1 != 0 && userNum2%userNum1 == 0) {
            cout << userNum2 << " is divisible by " << userNum1 << "." <<endl;
        }
        else {
            cout << userNum2 << " is not divisible by " << userNum1 << "." <<endl;
        }
    }
    else {
        cout << "Cannot divide by 0. " << userNum2 << " is not divisible by " << userNum1 << "." <<endl;
    }

    //Absolute difference
    difference = userNum1 - userNum2;

    if (difference < 0){
        difference *= -1;
    }

    cout << "The absolute difference between the two numbers is " << difference << endl;

    //Divide num1 by num2 and show remainder
    if (userNum2 != 0){
        divisionResult = userNum1 / userNum2;
        remainder =  userNum1 % userNum2;

        cout << "The result of dividing " << userNum1 << " by " << userNum2 << " is " << divisionResult << " with a remainder of " << remainder <<endl;
    }
    else {
        cout << "Cannot divide by 0. " << userNum1 << " is not divisible by " << userNum2 << " and has no remainder." <<endl;
    }

    return 0;
}
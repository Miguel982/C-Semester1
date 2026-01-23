#include <iostream>

using namespace std;

int main(){
    double userNum1 , userNum2;
    char userOperator;

    double result;
    bool flag = true;

    cout << "Enter your first number: ";
    cin >> userNum1;
    
    cout << "Enter your second number: ";
    cin >> userNum2;

    while (flag) {
        cout << "Enter the operation (+, -, /, *): ";
        cin >> userOperator;

        switch (userOperator)
        {
            case '+':
                result = userNum1 + userNum2;
                flag = false;
                break;

            case '-':
                result = userNum1 - userNum2;
                flag = false;
                break;

            case '/':
                result = userNum1 / userNum2;
                flag = false;
                break;

            case '*':
                result = userNum1 * userNum2;
                flag = false;
                break;
            
            default:
                cout << "The operator you have entered is invalid";
                break;
        }
    }
    
    cout << "This is the result: " << result;
    return 0;
}
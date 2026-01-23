#include <iostream>

using namespace std;

int main(){
    int userInt1,userInt2;
    int sum;

    cout << "Enter the first integer: ";
    cin >> userInt1;

    cout << "Enter the second integer: ";
    cin >> userInt2;

    sum = userInt1 + userInt2;

    cout << "The sum of the 2 numbers you enter is: " << sum;

    return 0;
}
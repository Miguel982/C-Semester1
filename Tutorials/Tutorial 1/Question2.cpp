#include <iostream>

using namespace std;

int main(){
    int userInt1,userInt2;
    int division, remainder;

    cout << "Enter an integer for the numerator: ";
    cin >> userInt1;

    cout << "Enter an integer for the denominator: ";
    cin >> userInt2;

    if (userInt2 != 0){
        division = userInt1 / userInt2;
        remainder = userInt1 % userInt2;

        cout << "The result of the division between these 2 numbers is " << division << " and the remainder is " << remainder;
    }
    else{
        cout << "Cannot divide by 0";
    }
    
    return 0;
}
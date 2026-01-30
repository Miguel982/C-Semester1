#include <iostream>

using namespace std;

int main(){
    int userInt1;

    cout << "Enter a integer: ";
    cin >> userInt1;

    if(userInt1 % 2 == 0){
        cout << "The number you have entered is even";
    }
    else{
        cout << "The number you have entered is odd";
    }

    return 0;
}
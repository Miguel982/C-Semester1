//Michael Lulic 40356190
//Lab #1
#include <iostream>

using namespace std;

int main() {
    double adult_price = 90;
    double child_price = 60;

    int reserved_days, points;
    double total;

    int a_number, c_number, d_number; //Adult number, child number and number of days that they will be staying

    cout << "How many adult guests? ";
    cin >> a_number;

    cout << "How many child guests? ";
    cin >> c_number;

    cout << "How many days? ";
    cin >> d_number;


    total = ((a_number * adult_price) + (c_number * child_price)) * d_number;

    points = total / 50;

    cout << "Your total bill for " << a_number << " adult guest(s) and " 
         << c_number << " child guest(s) for " 
         << d_number << " day(s) is $" << total << ". You have earned " << points << " points";

    return 0;
}
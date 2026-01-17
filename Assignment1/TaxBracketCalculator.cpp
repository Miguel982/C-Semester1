#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int userIncome;
    double tax, finalIncome;

    cout << "Enter your annual salary: ";
    cin >> userIncome;

    // 10k
    if (userIncome < 10000){
        tax = 0;

        finalIncome = userIncome;
    }

    // 10 - 20k
    else if (userIncome >= 10000 && userIncome <= 20000){
        tax = (userIncome - 10000) * 0.1;
        tax -= 500;

        if (tax < 0){
            tax = 0;
        }

        finalIncome = userIncome - tax;
    }


    // 20 - 50k
    else if (userIncome > 20000 && userIncome <= 50000){
        tax = ((userIncome - 20000) * 0.2) + 1000;
        tax -= 1000;

        if (tax < 0){
            tax = 0;
        }

        finalIncome = userIncome - tax;
    }

    
    // 50 - 100k
    else if (userIncome > 50000 && userIncome <= 100000){
        tax = ((userIncome - 50000) * 0.3) + 7000;
        tax -= 500;

        if (tax < 0){
            tax = 0;
        }

        finalIncome = userIncome - tax;
    }

    // 100k +
    else{
        tax = ((userIncome - 100000) * 0.4) + 22000;
        
        finalIncome = userIncome - tax;
    }

    //Forces 2 decimal places
    cout << fixed << setprecision(2);

    cout << "Salary: $" << userIncome << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Salaty after tax: $" << finalIncome << endl;


    return 0;
}
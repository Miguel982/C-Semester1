#include <iostream>
#include <iomanip>

using namespace std;

void function1(int, int); //Declare function 1
void function2(int, int, int&); //Declare function 2
double function3(int, int); //Declare function 3

int main(){

    int lowerBound, upperBound; //Stores the upper and lower bounds
    int resultFunc2; //Used as the reference var for function 2
    double resultFunc3; //Holds the double result of function 3
    char userChoice; //Stores what character the user chooses


    cout << "Please enter two positive integer numbers: (Lower bound/Upper bound): ";
    cin >> lowerBound;
    cin >> upperBound;

    cout << "Please enter a character: ";
    cin >> userChoice;

    switch (userChoice)
    {
        case 'a':
            function1(lowerBound, upperBound);
            break;

        case 'b':
            function2(lowerBound, upperBound, resultFunc2);
            cout << "The difference between two numbers is " << resultFunc2 << endl;
            break;
        
        case 'c':
            resultFunc3 = function3(lowerBound, upperBound);
            cout << fixed << setprecision(3);
            cout << "The value of sum is: " << resultFunc3;
            break;

        default:
            cout << "Invalid input";
    }

    return 0;
}


void function1(int lowerBound, int upperBound){
    
    cout << "List of numbers in this interval which are multiple of both 3 and 7:";

    for (int i = lowerBound; i <= upperBound; i++){

        if (i % 3 == 0 && i % 7 == 0){ //Only true if i is divisible by both 3 and 7
            cout << " " << i;
        }

    }

    cout << endl;
}

void function2(int lowerBound, int upperBound, int& result){

    result = upperBound - lowerBound;
}

double function3(int lowerBound, int upperBound){

    double result = 0;

    for (int i = lowerBound; i <= upperBound; i++){ 
        result += 1.0/i; //1.0 to do floating point division
    }

    return result * 11;
}
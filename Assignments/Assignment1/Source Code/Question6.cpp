#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double weight, length, width, height;
    double dimensionalWeight, finalWeight, cost;

    cout << "Enter the package weight in kilograms: ";
    cin >> weight;

    cout << "Enter the package dimensions (length, width, height) in centimeters: ";
    cin >> length;
    cin >> width;
    cin >> height;

    dimensionalWeight = (length * width * height);
    dimensionalWeight /= 5000;

    //Forces 2 decimal places
    cout << fixed << setprecision(2);

    cout << "The dimensional weight is " << dimensionalWeight << " kg." << endl;

    //Use the dimensional weight if it is greater than the actual weight
    if (dimensionalWeight > weight) {
        finalWeight = dimensionalWeight;
    }
    else {
        finalWeight = weight;
    }

    if (finalWeight <= 2){
        cost = 5;
    }
    else if (finalWeight > 2 && finalWeight <= 10) {
        cost = 10;
    }
    else if (finalWeight > 10 && finalWeight <= 20) {
        cost = 20;
    }
    else {
        cost = -1;
    }

    if (cost > 0){
        cout << "The shipping cost is $" << cost;
    }
    else {
        cout << "The package is too heavy to be shipped.";
    }

    return 0;
}
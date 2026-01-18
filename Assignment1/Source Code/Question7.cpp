#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int optionEntered;
    double userValue;
    double convertedValue;

    cout << "Enter the value you want to convert: ";
    cin >> userValue;

    cout << "Select the conversion:" << endl;
    cout << "1. Kilometers to Miles" << endl;
    cout << "2. Pounds to Kilograms" << endl;
    cout << "3. Celcius to Fahrenheit" << endl;
    cout << "4. Liters to Gallons" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> optionEntered;

    //Forces 2 decimal places
    cout << fixed << setprecision(2);

    switch (optionEntered){
        case 1: 
            convertedValue = userValue * 0.621371; 
            cout << userValue << " kilometers " << "is equal to " << convertedValue << " miles.";
            break;
        case 2: 
            convertedValue = userValue * 0.453592;
            cout << userValue << " pounds " << "is equal to " << convertedValue << " kilograms."; 
            break;
        case 3: 
            convertedValue = (userValue * 9 / 5) + 32; 
            cout << userValue << " celcius " << "is equal to " << convertedValue << " fahrenheit.";
            break;
        case 4: 
            convertedValue = userValue * 0.264172; 
            cout << userValue << " liters " << "is equal to " << convertedValue << " gallons.";
            break;
        default: 
            cout << "Invalid selection."; 
            break;
    }

    return 0;
}
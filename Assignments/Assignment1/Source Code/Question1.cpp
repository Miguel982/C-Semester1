#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int numOfItems;
    double priceItem, taxRate;
    double subtotal, taxAmount, total;

    cout << "Enter the number of items: ";
    cin >> numOfItems;

    cout << "Enter the price per item: ";
    cin >> priceItem;

    cout << "Enter the tax rate (%): ";
    cin >> taxRate;

    subtotal = numOfItems * priceItem;
    taxAmount = subtotal * (taxRate/100);
    total = subtotal + taxAmount;

    //Forces 2 decimal places
    cout << fixed << setprecision(2);

    cout << "Subtotal: $" << subtotal << endl;
    cout << "Tax: $" << taxAmount << endl;
    cout << "Total: $" << total << endl;

    return 0;
}

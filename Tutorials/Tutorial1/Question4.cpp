#include <iostream>

using namespace std;

int main(){ 
    char userInput;

    cout << "Enter a character: ";
    cin >> userInput;

    if ((userInput >= 'A' && userInput <= 'Z') || (userInput >= 'a' && userInput <= 'z')){
        switch (userInput)
        {
            case 'A': case 'a':
            case 'E': case 'e':
            case 'I': case 'i':
            case 'O': case 'o':
            case 'U': case 'u':
            case 'Y': case 'y': 
                cout << "The character you entered was a vowel" << endl; 
                break;

            default:
                cout << "The character you entered was a constant" << endl; 
                break;

        }
    }
    else {
        cout << "The character you entered was neither a vowel nor a constant" << endl;
    }

    return 0;
}
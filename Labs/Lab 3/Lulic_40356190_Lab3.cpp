//Michael Lulic 40356190
//Lab #3
#include <iostream>

using namespace std;

int main() {
    int userNum, originalNum, counter;


    while(true){
        cout << "Enter an even number: ";
        cin >> userNum;

        if(userNum % 2 == 0){
            cout << endl;
            break;
        }
    }

    originalNum = userNum;
    counter = 0;

    while(userNum > 0){
        for(int i = 0; i <= counter; i++){
            cout << originalNum - (i*2);
            if (i != counter){
                cout << "   ";
            }
        }        
        cout << endl;
        counter++;
        userNum -= 2;
    }

    return 0;
}

//Michael Lulic 40356190
//Lab #2
#include <iostream>

using namespace std;

int main() {
    int userChoice;
    int age;
    int anime;
    
    int i1;
    int i2;
    int i3;


    cout << "What is your choice? (1 or 2)" << endl;
    cin >> userChoice;

    if (userChoice == 1){

        cout << "\nGet your lucky numbers!" << endl;
        cout << "Share your age and the number of unwatched anime series on your Netflix watch list:" << endl;
        cin >> age;
        cin >> anime;

        if(age < 18 || age > 92){
            cout << "\nYou are not the right age to play!";
            return 0;
        }

        if (age < 40){
            i1 = anime % 10;
            i2 = (age * anime) % 100;
            i3 = 2 * age;
        }
        else{
            i1 = age + 8;
            i2 = (anime > age)? (anime - age) : (age - anime);
            i3 = (anime * anime) % 100;
        }
    }

    else if (userChoice == 2){
        cout << "\nManually enter your numbers: " << endl;
        cin >> i1;
        cin >> i2;
        cin >> i3;

        int temp;

        temp = i1;
        i1 = (i1 > i2) ? ((i1 > i3) ? i1 : i3) : ((i2 > i3) ? i2 : i3);

        if (i1 == i2){
            i2 = temp;

            i2 = (i2 > i3)? i2 : i3;

            if (i2 == i3){
                i3 = temp;
            }
        }
        else if (i1 == i3){
            i3 = temp;

            i3 = (i3 > i2)? i2 : i3;

            if (i3 == i2){
                i2 = temp;
            }
        }
        else{
            temp = i2;

            i2 = (i2 > i3)? i2 : i3;

            if (i2 == i3){
                i3 = temp;
            }
        }
    }

    cout << "\nYour lucky numbers are: " << endl;
    cout << i1 << endl;
    cout << i2 << endl;
    cout << i3 << endl;

    return 0;
}
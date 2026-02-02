#include <iostream>

using namespace std;

int main(){
    string userName; //Contains the user name
    string userInput; //The user's answer to the yes or no question

    int houseCounter; //Contains the number of houses the user has created
    int errorCounter; //Used to see how many times the user has failed to enter an even number
    int heightHouse; //Holds the width of the house
    int widthHouse; //Holds the height of the house


    cout << "What is your name?";
    cin >> userName;

    cout << "Well " << userName << ", welcome to my house drawing program.";

    while(true){

        //Would you like a house
        while (true){

            cout << "Do you want me to draw a simple house for you? (yes/no)";
            cin >> userInput;

            if(userInput.compare("yes") == 0){
                
                break; //Exits while true loop
            }

            else if (userInput.compare("no")){
                
                string house = houseCounter > 1 ? " houses!" : " house!";

                if(houseCounter > 0) {
                    cout << "Hope you like your " << houseCounter << house;
                }
                else {
                    cout << "Hope you like nothing :)";
                }

                return 0; //End of program
            }

            else {

                cout << "Please enter yes or no"; //Then asks the question again
            }
        }

        //Enter the height of the house
        cout << "Enter height of the house you want me to draw:";
        cin >> heightHouse;

        //Enter the width of the house
        while(true)
        {
            cout << "Please enter an even number for the width of the house (must be even numbers and bigger than 2):";
            cin >> widthHouse;

            if (widthHouse % 2 != 0){

                if(errorCounter <= 3){

                    cout << "You enter " << widthHouse << " for the width. Not an even number!";
                    errorCounter++;
                    continue; //Lets the user re-enter their value
                }

                else{
                    
                    cout << "It seems you are having troubles entering even numbers! Program ends now.";
                    return 0; //Ends program
                }
            }

            break; //Exits while(true) loop
        }
    }

    return 0;
}
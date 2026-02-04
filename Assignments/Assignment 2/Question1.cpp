#include <iostream>

using namespace std;

void printRoof(int); //Declare method to print the top of the house
void printBase(int, int); //Declare method to print the bottom of the house

int main(){

    string userName; //Contains the user name
    string userInput; //The user's answer to the yes or no question

    int houseCounter = 0; //Contains the number of houses the user has created
    int errorCounter = 1; //Used to see how many times the user has failed to enter an even number
    int heightHouse; //Holds the width of the house
    int widthHouse; //Holds the height of the house


    cout << "What is your name? ";
    cin >> userName;

    cout << "Well " << userName << ", welcome to my house drawing program.";

    while(true){

        //Would you like a house
        while (true){

            cout << "Do you want me to draw a simple house for you? (yes/no) ";
            cin >> userInput;

            if(userInput.compare("yes") == 0){
                
                break; //Exits while true loop
            }

            else if (userInput.compare("no") == 0){
                
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

                cout << "Please enter yes or no" << endl; //Then asks the question again
            }
        }

        //Enter the height of the house
        cout << "Enter height of the house you want me to draw: ";
        cin >> heightHouse;

        errorCounter = 1;

        //Enter the width of the house
        while(true)
        {
            cout << "Please enter an even number for the width of the house (must be even numbers and bigger than 2): ";
            cin >> widthHouse;

            if (widthHouse % 2 != 0 || widthHouse <= 2){

                if(errorCounter < 3){

                    cout << "You enter " << widthHouse << " for the width. Not an even number!" << endl;
                    errorCounter++;
                    continue; //Lets the user re-enter their value
                }

                else{
                    
                    cout << "You enter " << widthHouse << " for the width. Not an even number!" << endl;
                    cout << "It seems you are having troubles entering even numbers! Program ends now.";
                    return 0; //Ends program
                }
            }

            break; //Exits while(true) loop
        }

        printRoof(widthHouse);
        printBase(widthHouse, heightHouse);
        houseCounter++;
        
    }

    return 0;
}


void printRoof(int width){

    int spaces = (width / 2) - 1;

    string output = "";

    //Indents the first line so that the pyramid actually looks like a pyrammid
    for(int i = 1; i <= spaces; i++){
        
        output.append(" ");
    }

    output.append("*");

    for (int i = 1; i <= (width/2) ; i++ ){
        
        output.append("*"); //Adds an asterix in the front
        output[output.length() - (i * 2)] = '*'; //Adds an asterix behing the last asterix

        cout << output << endl;
    }

    return;
}

void printBase(int width, int height){

    string layer = "";

    for(int i = 0; i <= height; i++){
        layer = "";

        if (i == height){
            
            for (int j = 0; j < width; j++){
                
                layer.append("-"); //Sets all the dashes for the bottom
            }

            cout << layer << endl;
            return;
        }

        layer.append("|");

        for (int j = 0; j < width - 2; j++) {
           
            layer.append(" "); //Sets the spacing between the 2 pipes
        }

        layer.append("|");

        cout << layer << endl;
    }
}
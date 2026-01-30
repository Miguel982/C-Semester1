#include <iostream>

using namespace std;

int main(){
    void pyramid(int);
    void pattern1(int);
    void pattern2(int);
    void pattern3(int);

    
    pyramid(5);

    return 0;
}

void pyramid(int size){
    size = size < 1 ? 1 : size;

    int lengthLastRow = 2 * (size - 1) + 1;
    int spaces = lengthLastRow / 2;

    string output = "";

    for(int i = 1; i <= spaces; i++){
        output.append(" ");
    }

    for (int i = 1; i <= size; i++){
        output.append("*");

        cout << output << endl;
        
        if (output.length() != lengthLastRow) {
            output[output.length() - (i * 2)] = '*';
        }
    }

    return;
}

void pattern1(int size){

}

void pattern2(int size){
    
}

void pattern3(int size){
    
}
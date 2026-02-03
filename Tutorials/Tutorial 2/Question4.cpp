#include <iostream>

using namespace std;

int main(){
    void pyramid(int);
    void pyramid2(int);
    void pattern1(int);
    void pattern2(int);
    void pattern3(int);

    int num = 8;

    pyramid2(num);

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
        
        if (output.length() != lengthLastRow) {
            output[output.length() - (i * 2)] = '*';
        }

        cout << output << endl;
    }

    return;
}

void pattern1(int size){

}

void pattern2(int size){
    
}

void pattern3(int size){
    
}

void pyramid2(int width){

    int spaces = (width / 2) - 1;

    string output = "";

    for(int i = 1; i <= spaces; i++){
        output.append(" ");
    }

    output.append("*");

    for (int i = 1; i <= (width/2) ; i++ ){
        output.append("*");
        output[output.length() - (i * 2)] = '*';

        cout << output << endl;
    }

    return;
}
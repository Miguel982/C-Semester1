#include <iostream>

using namespace std;

int main(){
    int num = 49;

    int timesDivided = 0;

    for (int i = 1; i < num; i++){
        if(num % i == 0){
            timesDivided++;
        }
    }

    //or

    // for (int i = 1; i * i <= num; i++){
    //     if(num % i == 0){
    //         timesDivided++;
    //     }
    // }

    string output = (timesDivided == 1) ? " is Prime" : " is Not Prime";

    cout << num << output;
    return 0;
}
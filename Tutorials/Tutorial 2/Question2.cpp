#include <iostream>

using namespace std;

int main(){

    int n = 5; //Factorial of n
    int result = 1;

    for(int i = 1; i <= n ; i++){
        result *= i;
    }

    cout << "Factorial of " << n << ": " << result;

    return 0;
}
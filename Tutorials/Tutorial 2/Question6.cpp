#include <iostream>

using namespace std;

int main(){

    int n = 2251415;
    int og = n;
    int result = 0;

    while(n != 0){
        result++;
        n /= 10; 
    }

    result = (result == 0) ? 1 : result;

    cout << og << " has " << result << " digits";

    return 0;

}
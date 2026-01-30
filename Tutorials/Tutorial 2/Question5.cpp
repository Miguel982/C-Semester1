#include <iostream>

using namespace std;

int main(){

    int n = 10254125;
    int og = n;
    int result = 0;

    while(n != 0){
        result = (result * 10) + n % 10;
        n /= 10; 
    }

    cout << og << " reversed is: " << result;

    return 0;

}
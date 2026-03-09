//Michael Lulic 40356190
//Lab #4

#include <iostream>

using namespace std;

int countEven(int n);
int sumRecursive(int n);

int main(){
    
    int n;
    cout << "Please enter a positive integer: ";
    cin >> n;

    cout << "Number of even numbers between 1 and " << n << " is: " << countEven(n) << endl;
    cout << "Sum of numbers form 1 to " << n << " is: " << sumRecursive(n) << endl;

    return 0;
}

int countEven(int n){
    int count = 0;

    while (n > 0)
    {
       count++;
       n -= 2;
    }
    
    return count;
}

int sumRecursive(int n){

    if(n == 0){
        return 0;
    }

    return n + sumRecursive(n - 1);
}


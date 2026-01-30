#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int method1(int, int, int);
    int method2(int, int, int);
    int method3(int, int, int);

    int num1 = 0;
    int num2 = -10;
    int num3 = 200;



    cout << "Method 1: " << method1(num1, num2, num3) << endl;

    cout << "Method 2: " << method2(num1, num2, num3) << endl;

    cout << "Method 3: " << method3(num1, num2, num3) << endl;
    return 0;
}


int method1(int num1, int num2, int num3){
    int maximum = num1;

    if (maximum < num2){
        maximum = num2;
    }

    if (maximum < num3){
        maximum = num3;
    }

    return maximum;
}

int method2(int num1, int num2, int num3){
    int temp = max(num1,num2);

    return max(temp, num3);
}

int method3(int num1, int num2, int num3){
    return (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
}
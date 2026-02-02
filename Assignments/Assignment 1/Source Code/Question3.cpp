#include <iostream>
#include <cmath>

int main(){
    float x = 2;
    float y = 2;
    float z = 3;


    x = x + (((-1 * y) + (4 * x)) / (2 * z)) - (((x * sqrt(y)) + 6) / 4);

    std::cout << x;
    return 0;
}
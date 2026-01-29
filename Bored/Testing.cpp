#include "ArrayList.h"
#include <iostream>

using namespace std;

int main(){

    ArrayList<int> array;

    array.addFirst(10);
    array.addFirst(15);
    array.addLast(20);

    auto iterator = array.begin();

    for (int i = 0 ; i < 4; i++) {
        cout << iterator.get() << endl;
        iterator.next();
    }

    return 0;
}
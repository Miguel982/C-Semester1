#include <iostream>

using namespace std;

void hanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Step 1: Move n-1 disks to auxiliary
    hanoi(n - 1, source, destination, auxiliary);

    // Step 2: Move largest disk
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Step 3: Move n-1 disks to destination
    hanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n = 5;
    hanoi(n, '1', '2', '3');
}

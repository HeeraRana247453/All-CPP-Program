#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }

    // Move n-1 disks from source to auxiliary peg
    towerOfHanoi(n - 1, source, auxiliary, destination);

    // Move the nth disk from source to destination peg
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;

    // Move n-1 disks from auxiliary to destination peg
    towerOfHanoi(n - 1, auxiliary, destination, source);
}

int main() {
    int numDisks;

    cout << "Enter the number of disks: ";
    cin >> numDisks;

    towerOfHanoi(numDisks, 'A', 'C', 'B');

    return 0;
}

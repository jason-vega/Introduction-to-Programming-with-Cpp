#include <iostream>

using namespace std;

int main() {
    int counter = 0;

    cout << "Counter set to 0." << endl;

    counter++; // Post-increment

    cout << "Counter is now at " << counter << '.' << endl;

    counter = 100;
    counter--; // Post-decrement

    cout << "Counter is now at " << counter << '.' << endl;

    // Counter first evaluates to 99, and then increments
    cout << "Counter is still at " << counter++ << "..."
         << "but now counter is at " << counter << '.' << endl;

    counter = 500;

    // Counter first decrements, and then evaluates to 499
    cout << "Counter is now at " << --counter << '.' << endl // Pre-decrement
         << "Counter is still at " << counter << '.' << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    bool believeICanFly = true,
         // Everything except for false and 0 evaluates to true
         cool           = "beans";

    cout << "Boolean values are really just 1's and 0's: " << believeICanFly
         << endl;

    // Insert boolalpha into stream to have booleans output true/false
    cout << boolalpha
         << "\"You believe you can fly?\" \"That's " << cool << "!\"" << endl;

    return 0;
}

#include <iostream>

using namespace std;

int main() {
    // Try to guess whether each boolean variable evaluates to true or false!

    bool golden    = 1.618 >= 1.618,
         theReal   = "slim" != "shady",
         favorite  = "yo" == "Yo", // Strings are case-sensitive!
         trueLove  = golden,
         youreMy   = 1 == trueLove, // true/false is really stored as 1 and 0
         deputy    = 3 > 2 > 1, // Left-to-right evaluation
         woodySays = youreMy == favorite == deputy; // Left-to-right evaluation


    cout << boolalpha // All booleans in stream will output true/false
         << "golden (1.618 >= 1.618): " << golden << endl
         << "theReal (\"slim\" != \"shady\"): " << theReal << endl
         << "favorite (\"yo\" == \"Yo\"): " << favorite << endl
         << "trueLove (golden): " << trueLove << endl
         << "youreMy (1 == trueLove): " << youreMy << endl
         << "deputy (3 > 2 > 1): " << deputy << endl
         << "woodySays (youreMy == favorite == deputy): " << woodySays << endl;

    return 0;
}

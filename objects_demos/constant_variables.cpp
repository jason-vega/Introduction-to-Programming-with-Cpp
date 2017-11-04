#include <iostream>
#include <string>

using namespace std;

/* Constant variables are usually declared globally (outside of any function.)
   Add const keyword in front of definition to make variable constant. */

const double PI = 3.1416;
const string CAPITAL_OF_SPAIN = "Madrid";

// Now these variables can never be changed later on in our program!

int main() {
    // PI = 9.80; <-- Would this work?
    // CAPITAL_OF_SPAIN = "Mars"; <-- How about this? Try it out!

    cout << "I like pie! But I also like pi (" << PI << ")." << endl
         << "Marvelous Mary makes mochas in " << CAPITAL_OF_SPAIN << '.'
         << endl;

    return 0;
}

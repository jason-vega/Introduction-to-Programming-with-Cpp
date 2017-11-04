#include <iostream>
#include <string>

using namespace std;

int main() {
    bool sick      = false; // change to true to observe different behavior
    string ability, input;

    ability = sick ? "cannot" : "can";

    /* Above is same as saying:

    if (sick) {
        ability = "cannot";
    }
    else {
        ability = "can";
    }

    */

    cout << "You " << ability << " come to school today!" << endl;

    return 0;
}

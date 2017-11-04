#include <iostream>
#include <string>

using namespace std;

const string MONTHS[12] = {"January", "February", "March", "April", "May",
                           "June", "July", "August", "September", "October",
                           "November", "December"};

int main() {
    cout << "These months are cool!" << endl;

    for (string m : MONTHS) {
        /* This does not modify the original array, which is declared constant.
           Only the string m is changed, which holds a copy of each element. */
        m += " is cool";
        cout << m << endl;
    }

    cout << "These months are original!" << endl;
    // Proof that none of the original strings were modified
    for (string o : MONTHS) {
        cout << o << endl;
    }

    return 0;
}


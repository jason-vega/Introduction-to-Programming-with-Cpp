#include <iostream>

using namespace std;

int main() {
    char two = 50, // 50 interpreted as character '2'
           d = two * 2; // 100 interpreted as character 'd'

    cout << two << endl
         << two * 2 << endl // not interpreted as character
         << d << endl;

    return 0;
}


#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    int number = 0;
    stringstream ss;

    do {
        cout << "Please enter a number between 1 and 100: ";
        getline(cin, input);

        ss << input;
        ss >> number;
        ss.clear(); // string stream is reused on each iteration
    } while (number > 100 || number < 1);

    cout << "You entered: " << number;

    return 0;
}

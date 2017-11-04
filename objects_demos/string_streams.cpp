#include <iostream>
#include <string>
#include <sstream> // Allows us to use stringstreams

using namespace std;

int main() {
    string coolWord, input;
    double favoriteNumber = 0.0;
    int age = 0;
    stringstream ss;

    cout << "Enter a cool word: ";
    getline(cin, coolWord); // Strings only require you use getline()

    cout << "Enter your favorite number: ";
    getline(cin, input); // String input serves as a temporary holding place

    /* Because we asked for a number, we should save the input data as
       a double, not a string. This allows us to do arithmetic with
       the number if needed (you can't do math on strings!) */

    ss << input;
    ss >> favoriteNumber; // favoriteNumber is of double type
    ss.clear(); // Clear stringstream object for reuse

    cout << "Enter your age: ";
    getline(cin, input); // You may reuse the same string

    ss << input;
    ss >> age; // No need to clear since we are not reusing the stream

    cout << endl; // Provide some spacing

    cout << '"' << coolWord << "\" is a cool word! " << endl
         << favoriteNumber << " is an awesome number." << endl
         << "You are " << age << " years old!" << endl;


    return 0;
}

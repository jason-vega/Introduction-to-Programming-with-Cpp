#include <iostream>
#include <string>

using namespace std;

int main() {
    string greeting = "Hello ",
           name;

    cout << "Enter name: ";
    getline(cin, name);

    greeting = "Hello, " + name;
    greeting += '!'; // Could also use compound assignment

    cout << greeting; // Could also say cout << "Hello " + name + '!';

    return 0;
}

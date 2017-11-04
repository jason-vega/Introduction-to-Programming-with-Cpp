#include <iostream> // Allows us to access std::cin

using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";

    getline(cin, name);

    cout << "Hello, " << name;

    return 0;
}

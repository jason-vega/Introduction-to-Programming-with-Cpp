#include <iostream>

using namespace std;

int main() {
    double bankAccount = 0.00;

    cout << "At the start of the week, Jimmy had $" << bankAccount << endl;

    bankAccount += 100.50; // Same as bankAccount = bankAccount + 100.50;
    cout << "Jimmy earned some money! Now he has $" << bankAccount << endl;

    bankAccount -= 7.50; // Same as bankAccount = bankAccount - 7.50;
    cout << "Jimmy decided to buy a hamburger. Now he has $" << bankAccount
         << endl;

    bankAccount *= 2; // Same as bankAccount = bankAccount * 2;
    cout << "Jimmy asked a genie to double his bank account. Now he has $"
         << bankAccount << endl;

    bankAccount /= 10; // Same as bankAccount = bankAccount / 10;
    cout << "Oh no! Jimmy had some of his money stolen by robbers."
         << "Now he only has $" << bankAccount << endl;

    return 0;
}

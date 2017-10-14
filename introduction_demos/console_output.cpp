/* This is a multi-line comment.
   It can span multiple lines! */

#include <iostream> // Allows us to access std::cout

/* Note how some expressions end in a semi-colon ';'.
   These are like periods in a sentence! */

using namespace std; // Namespaces allow us to say cout instead of std::cout

int main() { // Program starts executing at the main function
    cout << "Hello, friends! ";

    // Data is inserted into standard output stream using insertion operator <<

    cout << "Insert endl to start a new line." << endl;

    cout << "Hello, again! I'm on a new line.\n"; // \n for new line also works

    cout << "Integers can also be inserted into the stream: " << 123456 << endl;

    cout << "You may " << "chain multiple " << "insertion operators." << endl;

    cout << "Strings literals are enclosed in double quotes, "
         << "but character literals are enclosed in single quotes" << '.';

    return 0; // This line should always be last in the main function
}

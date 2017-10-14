#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string input;
    int option = 0;
    stringstream ss;

    cout << "Oh no! The apocalypse has just begun. What do you do?" << endl
         << "1 - Run"  << endl
         << "2 - Hide" << endl
         << "3 - Eat some ice cream" << endl
         << "4 - Throw a party" << endl
         << "5 - Evacuate to Mars" << endl;

    getline(cin, input);

    /* Switch statements only take in expressions that evaluate to integers.
       Time for string stream again! */

    ss << input;
    ss >> option;

    switch (option) {
        case 1:
            cout << "You keep running and eventually find a portal. "
                 << "This portal takes you to an alternate universe where you "
                 << "are safe." << endl;
            break;
        case 2:
            cout << "You hide under a rock and try to wait out the apocalypse. "
                 << "Despite all odds, this actually works."
                 << endl;
            break;
        case 3: // Both case 3 and 4 output the same message
        case 4:
            cout << "You decide to enjoy your last few moments on Earth. "
                 << "When the aliens that are orchestrating this apocalypse "
                 << "see that, they decide to spare your life."
                 << endl;
            break;
        case 5:
            cout << "You decide to join in on Elon Musk's evacuation plan to Mars. "
                 << "There you live happily in a sustainable Martian colony." << endl;
            break;
        default:
            cout << "Please enter a valid option!" << endl;
    }

    return 0;
}

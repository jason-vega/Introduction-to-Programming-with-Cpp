#include <iostream>

using namespace std;

int main() {
    // Try to guess whether each boolean variable evaluates to true or false!

    bool thats  = !true,
         fishy  = !(thats == 0),
         cats   = "soft" && "playful", // both "soft" and "playful" are evaluated
         well   = thats && true, // only thats is evaluated
         // relational operators are evaluated before logical operators
         great  = 0 || "breakfast" != "pancakes",
         gatsby = "jay" || "james" || "jimmy"; // only "jay" is evaluated



    cout << boolalpha // All booleans in stream will output true/false
         << "thats (!true): " << thats << endl
         << "fishy (!(thats == 0)): " << fishy << endl
         << "cats (\"soft\" && \"playful\"): " << cats << endl
         << "well (thats && true): " << well << endl
         << "great (0 || \"breakfast\" != \"pancakes\"): " << great << endl
         << "gatsby (\"jay\" || \"james\" || \"jimmy\"): " << gatsby << endl;

    return 0;
}

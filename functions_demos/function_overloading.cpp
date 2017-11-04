#include <iostream>

using namespace std;

int makeSandwich(int peanutButter, int jelly) {
    int sandwich = peanutButter + jelly;

    cout << "I love PB&J!" << endl;

    return sandwich;
}

int makeSandwich(int bacon, int lettuce, int tomatoes) {
    int sandwich = bacon * lettuce * tomatoes;

    cout << "BLT's are COOL!" << endl;

    return sandwich;
}

string makeSandwich(string name, bool cool) {
    string sandwich = name + "-wich";

    cout << "This sandwich is " << boolalpha << cool << '!' << endl;

    return sandwich;
}

double makeSandwich(double preheat, bool toasted) {
    double sandwich = preheat / 2 * toasted;

    cout << "Let's heat up some sandwiches!" << endl;

    return sandwich;
}

int main() {
    int pbj = makeSandwich(2, 4),
        blt = makeSandwich(3, 1, 4);
    string fluffy = makeSandwich("lil' bun", true);
    double toasty = makeSandwich(375.5, false);

    cout << "PB&J is SERVED: " << pbj << endl
         << "BLT is SERVED: " << blt << endl
         << "Hello " << fluffy << '!' << endl
         << toasty << " is toasty!" << endl;


    return 0;
}

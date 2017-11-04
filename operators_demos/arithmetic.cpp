#include <iostream>

using namespace std;

int main() {
    /* Say we go to the store and buy an expensive item.
       Let's figure out how much we end up paying! */

    double price = 99.90,
           tax   = 0.1,
           total = price * (1 + tax),
           dollars = static_cast<int>(total),
           cents = (total - dollars) * 100;

    cout << "You pay " << dollars << " dollars "
         << "and " << cents << " cents." << endl;

    return 0;
}

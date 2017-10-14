#include <iostream>
#include <cmath> // Allows us to access sqrt and pow

using namespace std;

int main() {
    /* Say we have a right triangle with side a of length 3 and
       side b of length 4. Let's use the Pythagorean theorem to
       find the length of hypotenuse c! */

    int a = 3,
        b = 4,
        c = 0;

    c = sqrt(pow(a, 2) + pow(b, 2)); // Pythagorean theorem

    cout << "The hypotenuse of the triangle is " << c << endl;

    return 0;
}

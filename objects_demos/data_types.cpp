#include <iostream>
#include <string> // Allows us to create string variables

using namespace std;

int main() {
    // Integers truncate (cut off) any decimals!
    int amount = 42;

    // String literals are enclosed in double-quotes
    string awesomeHigherBeing = "unicorns";

    // Character literals are enclosed in single-quotes
    char period = '.';

    /* Multiple definitions of the same data type can be
       chained together using commas */

    double percentRainbow = 99.99, // Floating-point data types allow decimals
           favoriteRadioStation = 90.7,
           stationRating = 4.5;

    cout << "I have " << amount << ' ' << awesomeHigherBeing << period << endl
         << percentRainbow << "% of them are rainbow-colored!" << endl;

    cout << "Julia the unicorn tunes in to radio station " << favoriteRadioStation
         << " to catch her favorite jams. She rates it " << stationRating
         << " out of 5 stars!" << endl;



    return 0;
}

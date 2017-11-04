#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const int MAX_SCORE = 80; // maximum amount of points should never change

int main() {
    // Say a student took a test. Let's calculate their score as a percentage!
    int score = 0;
    double percentageScore = 0.00;
    string input;
    stringstream ss;

    cout << "Enter points (out of 80): ";
    getline(cin, input);

    ss << input;
    ss >> score;

    percentageScore = static_cast<double>(score) / MAX_SCORE * 100;

    /* Division between integers gives an integer answer, but division
       between an integer and a floating-point number produces a
       floating-point answer. Without type casting, score / maxScore
       would produce a decimal value between 0 and 1, with the decimal
       part truncated; only 0 or 1 would be displayed. Try it out!*/

    cout << "Score: " << percentageScore << "%" << endl;

    return 0;
}

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    /* Find out which letter grade a student gets on their test
       based on their score (%). Assume no extra credit is allowed. */

    int score = 0;
    string input;
    char letterGrade = ' ';
    bool validScore = true;
    stringstream ss;

    /* score needs to be integer type so that we can use
       comparison operators properly. So, as usual, let's
       use a string stream! */

    cout << "Enter score (%): ";
    getline(cin, input);

    ss << input;
    ss >> score;

    if (score <= 100 && score >= 90) {
        letterGrade = 'A';
    }
    else if (score < 90 && score >= 80) {
        letterGrade = 'B';
    }
    else if (score < 80 && score >= 70) {
        letterGrade = 'C';
    }
    else if (score < 70 && score >= 60) {
        letterGrade = 'D';
    }
    else if (score < 60) {
        letterGrade = 'F';
    }
    else {
        validScore = false;
    }

    if (validScore) {
        cout << "Student's letter grade: " << letterGrade << endl;
    }
    else {
        cout << "Please enter a valid score!" << endl;
    }

    return 0;
}

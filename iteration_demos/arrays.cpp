#include <iostream>

using namespace std;

const int MAX_LOTTERY_NUMBERS = 6;

int main() {
    int lotteryNumbers[MAX_LOTTERY_NUMBERS] = {5, 12, 13, 60, 17, 4};

    cout << "The lottery numbers today are: ";

    lotteryNumbers[0] = 10; // Let's change the first element to 10
    lotteryNumbers[5] *= 4; // Let's multiply the last element by 4

    for (int i = 0; i < MAX_LOTTERY_NUMBERS; i++) {
        lotteryNumbers[i]--; // Let's subtract each element by 1
        cout << lotteryNumbers[i] << ' ';
    }

    return 0;
}


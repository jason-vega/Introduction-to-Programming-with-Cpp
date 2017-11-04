#include <iostream>

using namespace std;

int makeSandwich(int lettuce, int cheese, int bread, int bacon=20) {
	int sandwich = lettuce + cheese + bread * bacon;

	return sandwich;
}

int main() {
	makeSandwich(1, 2, 3, 4); // merely evaluates expression

	cout << makeSandwich(8, 30, 60, 1) << endl;

	return 0;
}

#include <iostream>
using namespace std;

void printMultiplicationTable(int num, int range) {
    cout << "Multiplication Table for " << num << ":\n";
    for (int i = 1; i <= range; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() {
    int number, range;

    cout << "Enter a number to generate its multiplication table: ";
    cin >> number;

    cout << "Enter the range for the multiplication table: ";
    cin >> range;

    if (range <= 0) {
        cout << "Range must be a positive number. Please try again.\n";
        return 1;
    }

    printMultiplicationTable(number, range);

    return 0;
}

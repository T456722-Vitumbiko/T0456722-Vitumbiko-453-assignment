#include <iostream>
using namespace std;


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


    }

    printMultiplicationTable(number, range);

    return 0;
}

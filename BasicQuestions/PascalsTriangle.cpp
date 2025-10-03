//Pascals Triangle
#include <iostream>
using namespace std;

// Function to calculate nCr (binomial coefficient)
int nCr(int n, int r) {
    int res = 1;
    for (int i = 0; i < r; i++) {
        res = res * (n - i) / (i + 1);
    }
    return res;
}

int main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // Print spaces for triangle shape
        for (int space = 0; space < rows - i - 1; space++) {
            cout << "  ";
        }

        // Print numbers
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << "   ";
        }
        cout << endl;
    }

    return 0;
}

//Armstrong number
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, sum = 0, digits = 0;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    // count digits
    digits = (num == 0) ? 1 : (int)log10(num) + 1;

    // calculate sum of digits^digits
    temp = num;
    while (temp > 0) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if (sum == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is NOT an Armstrong number.";

    return 0;
}

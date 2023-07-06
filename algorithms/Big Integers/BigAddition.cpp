#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string addNumbers (string n1, string n2);
int charToDigit (char c);
char digitToChar (int i);

int main () {
    string n1, n2;

    cin >> n1 >> n2;

    cout << addNumbers(n1, n2);
}

string addNumbers (string n1, string n2) {
    if (n1.length() > n2.length()) {
        swap(n1, n2);
    }
    // resultado
    string result = "";

    // inverter
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());

    int carry = 0;

    for (int i = 0; i < n1.length(); i++) {
        int d1 = charToDigit(n1[i]);
        int d2 = charToDigit(n2[i]);

        int sum = d1 + d2 + carry;
        int output_digit = sum % 10;
        carry = sum / 10;

        result.push_back(digitToChar(output_digit));
    }

    for (int i = n1.length(); i < n2.length(); i++) {
        int d2 = charToDigit(n2[i]);
        int sum = d2 + carry;
        int output_digit = sum % 10;
        carry = sum / 10;
        result.push_back(digitToChar(output_digit));
    }

    if (carry != 0) {
        result.push_back('1');
    }

    reverse(result.begin(), result.end());
    return result;
}

int charToDigit (char c) {
    return c - '0';
}

char digitToChar (int i) {
    return i + '0';
}
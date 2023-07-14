#include <iostream>

using namespace std;

int solve (int n) {
    int count = 0;

    while (n > 2048) {
        n -= 2048;
        count++;
    }

    while (n) {
        if (n & 1)
            count++;

        n = n >> 1;
    }

    return count;
}

int main () {
    int t, n;

    cin >> t;

    while (t--) {
        cin >> n;
        cout << solve(n) << endl;
    }
    return 0;
}
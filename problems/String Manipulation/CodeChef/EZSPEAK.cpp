#include <iostream>
#include <string>

using namespace std;

string solve(int n, string p) {
    int countC = 0;
    for (int i = 0; i < n; i++) {
        if (p[i] == 'a' || p[i] == 'e' || p[i] == 'i' || p[i] == 'o' || p[i] == 'u')
            countC = 0;
        else
            countC++;

        if (countC >= 4)
            return "NO";
    }

    return "YES";
}

int main () {
    int t, n;
    string p;

    cin >> t;

    while (t--) {
        cin >> n >> p;
        cout << solve(n, p) << endl;
    }

    return 0;
}
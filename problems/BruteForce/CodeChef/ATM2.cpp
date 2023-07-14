#include <iostream>
#include <string>

using namespace std;

string solve (int n, int k) {
    string res = "";
    int a;

    for (int i = 0; i < n; i++) {
        cin >> a;

        if (a <= k) {
            res.push_back('1');
            k -= a;
        } else {
            res.push_back('0');
        }
    }

    return res;
}

int main () {
    int t, n, k;

    cin >> t;

    while (t--) {
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}
#include <iostream>
#define ll long long

using namespace std;

ll solve(ll n) {
    ll res = 0;

    while (n) {
        res += n;
        n = n >> 1;
    }

    return res;
}

int main () {
    int t;
    ll n;

    cin >> t;

    while (t--) {
        cin >> n;
        cout << solve(n) << endl;
    }
}
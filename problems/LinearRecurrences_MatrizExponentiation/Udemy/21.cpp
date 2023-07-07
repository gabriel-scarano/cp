#include<iostream>
#define ll long long

using namespace std;

const int limit = 1e9+7;

int locker(int n);
int powr(int a, int b);

int main () {
    int n;

    cin >> n;

    cout << locker(n);

    return 0;
}

int locker(int n) {
    if (n == 1)
        return 1;
    else if ((n & 1) == 0) {
        return powr(2, n/2);
    } else
        return powr(2, (n/2)-1) * 3;
}

int powr(int a, int b) {
    ll res = 1;
    while (b) {
        if (b & 1) res *= a, res %= limit;
        a *= a;
        a %= limit;
        b = b >> 1;
    }

    return res;
}
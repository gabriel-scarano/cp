#include <iostream>
#include <cstring>
using namespace std;

const int mod = 1e9 + 7;
const int sz = 3;

struct Mat {
    int m[sz][sz];

    Mat() {
        memset(m, 0, sizeof(m));
    }

    void identity() {
        for (int i = 0; i < sz; i++) {
            m[i][i] = 1;
        }
    }

    Mat operator* (Mat a) {
        Mat res;
        for (int i = 0; i < sz; i++) {
            for (int j = 0; j < sz; j++) {
                for (int k = 0; k < sz; k++) {
                    res.m[i][j] += m[i][k] * a.m[k][j];
                    res.m[i][j] %= mod;
                }
            }
        }

        return res;
    }
};

int Fibosum (int n) {
    Mat res;
    res.identity();
    Mat T;
    T.m[0][0] = T.m[0][1] = T.m[0][2] = T.m[1][1] = T.m[1][2] = T.m[2][1] = 1;

    if (n <= 0) return 0;
    else if (n == 1) return 1;

    n -= 1;

    while (n) {
        if (n & 1) res = res * T;
        T = T * T;
        n = n >> 1;
    }

    return (res.m[0][0] + res.m[0][1]) % mod;
}

int main () {
    int t, n, m;

    cin >> t;

    while (t--) {
        cin >> n >> m;

        cout << (Fibosum(m) - Fibosum(n-1) + mod) % mod << endl;
    }

    return 0;
}

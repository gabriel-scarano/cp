#include <iostream>

using namespace std;

int powr(int a, int b) {
    int res = 1;

    while (b) {
        if (b&1) {
            res *= a;
        }

        a *= a;
        b = b >> 1;
    }

    return res;
}

int main () {
    cout << powr(3, 2);

    return 0;
}
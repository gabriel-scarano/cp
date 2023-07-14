#include <iostream>
#include <set>

using namespace std;

int solve () {
    int a, b, a1, b1, a2, b2;
    set<int> s, s1, s2;

    cin >> a >> b >> a1 >> b1 >> a2 >> b2;
    s.insert(a);
    s.insert(b);
    s1.insert(a1);
    s1.insert(b1);
    s2.insert(a2);
    s2.insert(b2);

    if (s == s1) {
        return 1;
    } else if (s == s2) {
        return 2;
    } else {
        return 0;
    }
}

int main () {
    int t;

    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }
}
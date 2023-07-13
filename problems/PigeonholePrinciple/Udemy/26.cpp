#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int solve(int n,int m, vector<int> a){
    ll res = 1;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            res *= abs(a[i] - a[j]);
            res %= m;
        }
    }

    return res;
}

int main () {
    int n, m, a;
    vector<int> nums;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }

    cout << solve(n, m, nums);

    return 0;
}
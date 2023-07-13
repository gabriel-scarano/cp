#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

string solve(int n, vector<int> nums, unordered_map<int, bool> keys) {
    if (n >= 130)
        return "Yes";

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                if (i != j && j != k && keys.count((nums[i]^nums[j]^nums[k])) > 0)
                    return "Yes";

    return "No";
}

int main () {
    int n, a;
    vector<int> nums;
    unordered_map<int, bool> keys;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
        keys.insert({ a, true });
    }

    cout << solve(n, nums, keys);
    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int solve (int n, vector<int> nums) {
    int mod = n;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int soma = 0;
        for (int j = i; j < n; j++) {
            soma += nums[j];

            if (soma % mod == 0) count++;
        }
    }

    return count;
}

int main () {
    int n, a;
    vector<int> nums;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        nums.push_back(a);
    }

    cout << solve(n, nums);


    return 0;
}
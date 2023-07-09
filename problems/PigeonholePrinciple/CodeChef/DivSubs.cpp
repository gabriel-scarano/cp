#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

struct Bucket {
    int quant;
    vector<int> inds;

    Bucket() {
        quant = 0;
    }
};

void solve (int n) {
    Bucket *buckets = new Bucket[n];
    int a, soma = 0;
    vector<int> nums;
    bool achou = false;

    for (int i = 0; i < n; i++) {
        cin >> a;
        soma += a;
        soma %= n;
        nums.push_back(soma);
        buckets[soma].quant++;
        buckets[soma].inds.push_back(i+1);
    }

    if (buckets[0].quant != 0) {
        cout << buckets[0].inds[0] << endl;
        for (int i = 1; i <= buckets[0].inds[0]; i++)
            cout << i << " ";

        cout << endl;
    } else {
        for (int i = 1; i < n && !achou; i++) {
            if (buckets[i].quant > 1) {
                cout << buckets[i].inds[1] - buckets[i].inds[0] << endl;
                for (int j = buckets[i].inds[0] + 1; j <= buckets[i].inds[1]; j++)
                    cout << j << " ";

                cout << endl;

                achou = true;
            }
        }

        if (!achou)
            cout << -1 << endl;
    }
}

int main () {
    int t, n;

    cin >> t;

    while (t--) {
        cin >> n;
        solve(n);
    }

    return 0;
}
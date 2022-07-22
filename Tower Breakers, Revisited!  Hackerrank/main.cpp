#include <iostream>
#include <vector>

using namespace std;

const int N = 1e6 + 1;

int pr_sum[N];

void seive() {
    vector<bool> pr(N, true);

    for (int i = 2; i < N; ++i) {
        if (pr[i]) {
            pr_sum[i] = 1;
            for (int j = i * 2; j < N; j += i) {
                int jj = j;
                while (jj % i == 0) {
                    jj /= i;
                    pr_sum[j]++;
                }
                pr[j] = false;
            }
        }
    }
}

int main() {
    seive();

    int t;
    cin >> t;

    while (t--) {
        int n, nim_sum = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            nim_sum ^= pr_sum[a[i]];
        }

        if (nim_sum) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
    }
}

#include <fstream>
#include <iostream>

using namespace std;

const int Nmax = 1000005;
const int INF = 1000000000;
const int MOD = 998244353;

char a[55][55], ans[55];
int n, m;

bool is_valid() {
    for (int i = 2; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= m; j++) {
            cnt += (ans[j] != a[i][j]);
        }
        if (cnt > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin.sync_with_stdio(false);
    cin >> t;

    while (t--) {
        cin >> n >> m;

        for (int i = 1; i <= n; ++i) {
            cin >> (a[i] + 1);
        }

        for (int i = 1; i <= m; ++i) {
            ans[i] = a[1][i];
        }

        ans[m + 1] = '\0';

        if (is_valid()) {
            cout  << (ans + 1) << "\n";
        }
        else {
            bool is_good = false;
            for (int i = 1; i <= m && !is_good; ++i) {
                for (char c = 'a'; c <= 'z' && !is_good; ++c) {
                    if (c != a[1][i]) {
                        ans[i] = c;
                        if(is_valid()) {
                            cout << (ans + 1) << "\n";
                            is_good = true;
                        }
                    }
                }
                ans[i] = a[1][i];
            }
            if (!is_good) {
                cout << "-1\n";
            }
        }
    }

    return 0;
}

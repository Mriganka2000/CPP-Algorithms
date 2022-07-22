#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n, a, b, c, d, p, q, y;
        cin >> n >> a >> b >> c >> d >> p >> q >> y;
        int loc[n+1];
        for (int i = 1; i <= n; ++i) {
            cin >> loc[i];
        }

        int walk = abs(loc[b] - loc[a]) * p;

        int train = INT_MAX;
        if (abs(loc[c] - loc[a]) * p <= y) {
            train = y + abs(loc[d] - loc[c]) * q + abs(loc[d] - loc[b]) * p;
        }

        cout << min(train, walk) << endl;
    }
}

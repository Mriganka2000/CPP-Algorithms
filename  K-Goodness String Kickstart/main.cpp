#include <iostream>
#define ll long long

using namespace std;

void solve() {
    string str;
    ll n, k;

    cin >> n >> k;
    cin >> str;

    ll count = 0;
    for (ll i = 0; i < n / 2; i++) {
        count += (str[i] == str[n - i - 1]);
    }

    cout << abs(count - k) << endl;
}

int main() {
    int t;

    cin >> t;

    while (t--) {
        solve();
    }
}

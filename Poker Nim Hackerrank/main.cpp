#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, xs = 0;
        cin >> n >> k;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            xs ^= x;
        }

        cout << (xs ? "First" : "Second") << "\n";
    }
}

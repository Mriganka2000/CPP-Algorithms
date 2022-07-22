#include <iostream>
#define lli long long int

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        lli n, k;
        std::cin >> n >> k;
        lli a[n];
        for (lli i = 0; i < n; i++) {
            std::cin >> a[i];
        }
        lli b[n];
        for (lli i = 0; i < n; i++) {
            std::cin >> b[i];
        }
        lli max = 0;
        for (lli i = 0; i < n; ++i) {
            lli count = k / a[i];
            lli profit = count * b[i];
            if (max < profit) {
                max = profit;
            }
        }
        std::cout << max << std::endl;
    }
}

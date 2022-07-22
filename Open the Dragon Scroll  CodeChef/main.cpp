#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n, a, b;
        std::cin >> n >> a >> b;
        
        int countA0 = 0, countA1 = 0, countB0 = 0, countB1 = 0;

        for (int i = 0; i < n; ++i) {
            if (a & (1 << i)) {
                countA1++;
            } else {
                countA0++;
            }
            if (b & (1 << i)) {
                countB1++;
            } else {
                countB0++;
            }
        }

        int count = std::min(countA1, countB0) + std::min(countB1, countA0);
        int ans = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (count == 0) {
                break;
            }
            ans += (1 << i);
            count--;
        }

        std::cout << ans << std::endl;
    }
}

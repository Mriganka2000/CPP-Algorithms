#include <iostream>
#define ll unsigned long long int

int main() {
    ll t ;
    std::cin >> t;

    while (t--) {
        ll n;
        std::cin >> n;
        ll min = INT32_MIN;
        ll arr[n];
        ll index = -1;
        for (ll i = 0; i < n; ++i) {
            std::cin >> arr[i];
            if (min > arr[i]) {
                min = arr[i];
                index = i + 1;
            }
        }
        std::cout << index << std::endl;
    }
}

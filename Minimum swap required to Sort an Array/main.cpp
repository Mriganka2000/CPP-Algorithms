#include <iostream>
#include <vector>
#include <algorithm>

int count_swap(int *arr, int n) {
    std::vector<std::pair<int, int>> vec(n);

    for (int i = 0; i < n; ++i) {
        vec[i] = { arr[i], i };
    }
    
    std::sort(vec.begin(), vec.end());

    int swaps = 0;
    for (int i = 0; i < n; ++i) {
        if (vec[i].second == i) {
            continue;
        } else {
            swaps++;
            std::swap(vec[i], vec[vec[i].second]);
            i--;
        }
    }

    return swaps;
}

int main() {
    int n;
    std::cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    std::cout << count_swap(arr, n) << std::endl;
}

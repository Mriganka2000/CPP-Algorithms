#include <iostream>
#include <unordered_map>

int count_pairs(int *arr, int n, int sum) {
    int count = 0;
    std::unordered_map<int, int> map;

    for (int i = 0; i < n; i++) {
        if (map.find(sum - arr[i]) != map.end()) {
            count += map[sum - arr[i]];
        }
        map[arr[i]]++;
    }

    return count;
}

int main() {
    int n, sum;
    std::cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cin >> sum;

//    int arr[] = { 1, 5, 7, -1, 5};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int sum = 6;

    std::cout << count_pairs(arr, n, sum);
}

#include <iostream>
#include <unordered_set>

#define MAX 100

int find_missing(int arr[], int n) {
    std::unordered_set<int> set(arr, arr + n);

    int index = 1;
    
    while (true) {
        if (set.find(index) == set.end()) {
            return index;
        }
        index ++;
    }
}

int main() {
    int arr[MAX], n;
    std::cin >> n;

    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    
    std::cout << find_missing(arr, n);
}

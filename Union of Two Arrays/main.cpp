#include <iostream>
#include <unordered_set>

void union_arr(int *arr1, int *arr2, int m, int n) {
    std::unordered_set<int> set;

    for (int i = 0; i < m; ++i) {
        set.insert(arr1[i]);
    }
    for (int i = 0; i < n; ++i) {
        set.insert(arr2[i]);
    }

    for (auto item : set) {
        std::cout << item << " ";
    }
}

int main() {
    int m, n;
    std::cout << "Enter the sizes of arrays :- ";
    std::cin >> m >> n;
    int arr1[m];
    int arr2[n];

    std::cout << "Enter the 1st array :-" << std::endl;
    for (int i = 0; i < m; ++i) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter the 2nd array :-" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr2[i];
    }

    union_arr(arr1, arr2, m, n);
}

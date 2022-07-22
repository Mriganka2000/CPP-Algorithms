#include <iostream>

int findPivot(int *arr, int start, int end) {
    int index = start;
    int pivot = arr[end];

    for (int i = start; i < end; i++) {
        if (arr[i] < pivot) {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }

    int temp = arr[index];
    arr[index] = arr[end];
    arr[end] = temp;

    return index;
}

void sort(int *arr, int start, int end) {
    if (start < end) {
        int index = findPivot(arr, start, end);
        sort(arr, start, index - 1);
        sort(arr, index + 1, end);
    }
}

int main() {
    int arr[] = { 4, 1, 3, 5, 2 };
    sort(arr, 0, 4);

    for (int item : arr) {
        std::cout << item << " ";
    }
}

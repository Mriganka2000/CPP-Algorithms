#include <iostream>
#define MAX 100

using namespace std;

int *swapallzero(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    for (int i = count; i < n; i++) {
        arr[i] = 0;
    }

    return arr;
}

int main() {
    int arr[MAX], n;

    cout << "Enter the size of the array :- ";
    cin >> n;
    cout << "Enter the elements of the array :- " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int *result = swapallzero(arr, n);

    for (int i = 0; i < n; i++) {
        cout << result[i];
    }

    return 0;
}

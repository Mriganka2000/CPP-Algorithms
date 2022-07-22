#include <iostream>

using namespace std;

bool is_prime(int val) {
    if (val == 1 || val == 0) {
        return false;
    }
    int div = 2;
    while (div < val / 2) {
        if (val % div == 0) {
            return false;
        }
        div++;
    }
    return true;
}

int find_prime(int start, int end) {
    int max_prime = 0, min_prime = 0;

    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            min_prime = i;
            break;
        }
    }

    for (int i = end; i >= start; i--) {
        if (is_prime(i)) {
            max_prime = i;
            break;
        }
    }

    if (min_prime != 0 && max_prime != 0) {
        return (max_prime - min_prime);
    } else {
        return -1;
    }
}

int main() {
    int start, end;
    cout << "Enter the start position :- ";
    cin >> start;
    cout << "Enter the end position :- ";
    cin >> end;

    cout << find_prime(start, end);
}

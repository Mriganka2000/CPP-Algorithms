#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void reverseFirstKElements(int k, queue<int>& q) {
    if (q.empty() || k > q.size()) {
        return;
    }
    if (k <= 0) {
        return;
    }

    stack<int> s;
    int i = 1;
    while (i <= k) {
        s.push(q.front());
        q.pop();
        i++;
    }

    while (!s.empty()) {
        int val = s.top();
        s.pop();
        q.push(val);
    }

    for (int j = 0; j < q.size() - k; ++j) {
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverseFirstKElements(3, q);

    while (!q.empty()) {
        cout << q.front() << "\n";
        q.pop();
    }
}

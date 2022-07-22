#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> arr, int N) {
    int maxx = *max_element(arr.begin(), arr.end());
    int total = accumulate(arr.begin(), arr.end(), 0);
    int sum = total - maxx;
    int ans = 0;
    if((sum + 1) < maxx) {
        // Condition to check whether the project with maximum module can be used in alternate with
        // rest of the modules.
        ans = (2 * sum) + 1;
    }
    else {
        ans = total;
    }
    return ans;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for(int i = 0; i < N; i ++) {
        cin >> arr[i];
    }
    int ans = solve(arr, N);
    cout << ans << endl;
}

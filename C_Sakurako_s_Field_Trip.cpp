#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int disturbance = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                disturbance++;
            }
        }

        unordered_map<int, int> leftCount, rightCount;
        for (int i = 0; i < n / 2; i++) {
            leftCount[arr[i]]++;
            rightCount[arr[n - 1 - i]]++;
        }

        int maxOverlap = 0;
        for (const auto& entry : leftCount) {
            int key = entry.first;
            maxOverlap = max(maxOverlap, entry.second + rightCount[key]);
        }

        int minDisturbance = disturbance - maxOverlap + 1;
        cout << max(0, minDisturbance) << endl;
    }

    return 0;
}

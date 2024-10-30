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
        unordered_map<int, int> sumIndex;
        int currSum = 0;
        int ans = 0;
        int lastIndex = -1;

        for (int i = 0; i < n; i++) {
            currSum += arr[i];

            if (currSum == 0) {
                ans++;
                lastIndex = i;
                currSum = 0; 
                sumIndex.clear();
            }
            else if (arr[i] == 0) {
                ans++; 
                lastIndex = i; 
                currSum = 0; 
                sumIndex.clear();
            }
            else if (sumIndex.find(currSum) != sumIndex.end()) {
                if (sumIndex[currSum] >= lastIndex) {
                    ans++;
                    lastIndex = i;
                    currSum = 0; 
                    sumIndex.clear();
                }
            }

            sumIndex[currSum] = i;
        }

        cout << ans << endl;
    }

    return 0;
}

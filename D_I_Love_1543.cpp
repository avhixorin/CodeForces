#include <bits/stdc++.h>
#define int long long  // Define `int` as `long long` for handling large numbers
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define umap unordered_map
#define uset unordered_set
#define pq priority_queue
#define vt vector
#define pr pair
#define yep cout << "YES\n";
#define nope cout << "NO\n";
using namespace std;

void avhixorin() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> arr(n, vector<char>(m));

    // Input the character matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<char> ans;  
    int left = 0, right = m - 1, top = 0, bottom = n - 1;

    // Clockwise traversal starting from the bottom-right corner
    while (top <= bottom && left <= right) {
        // Traverse from right to left on the bottom row
        for (int k = right; k >= left; k--) {
            ans.push_back(arr[bottom][k]);
        }
        bottom--; 

        // Traverse from bottom to top on the left column
        for (int k = bottom; k >= top; k--) {
            ans.push_back(arr[k][left]);
        }
        left++; 

        // Check bounds before traversing the top row
        if (top <= bottom) {
            for (int k = left; k <= right; k++) {
                ans.push_back(arr[top][k]);
            }
            top++; 
        }

        if (left <= right) {
            for (int k = top; k <= bottom; k++) {
                ans.push_back(arr[k][right]);
            }
            right--; 
        }
    }

    int avhi = 0;
    //add the 
    for (int i = 0; i < ans.size() - 3; i++) {
        if (ans[i] == '1' && ans[i + 1] == '5' && ans[i + 2] == '4' && ans[i + 3] == '3') {
            avhi++;
        }
    }

    cout << avhi << endl; 
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        avhixorin();
    }

    return 0;
}

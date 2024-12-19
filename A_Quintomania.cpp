#include <bits/stdc++.h>
#define int long long
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
    int n;
    cin >> n;
    vector<int> input(n);

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int ptr1 = 0;
    int ptr2 = 1;
    
    while (ptr2 < n) {
        if (abs(input[ptr1] - input[ptr2]) != 5 && abs(input[ptr1] - input[ptr2]) != 7) {
            cout << "NO" << endl;
            return;
        }
        ptr1++;
        ptr2++;
    }
    cout << "YES" << endl;
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

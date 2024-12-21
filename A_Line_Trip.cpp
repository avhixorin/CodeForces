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
#define vi vector<long long>
#define pr pair
#define haa cout << "YES\n";
#define nahi cout << "NO\n";
using namespace std;

int gcd(int a, int b) {
    return __gcd(a, b);
}

void avhixorin() {
    int n, x;
    cin >> n >> x;
    vi v(n);
    for (auto &it : v) cin >> it;

    vi tr;
    for (int i = 1; i < n; i++) {
        int d = v[i] - v[i - 1];
        tr.pb(d);
    }
    tr.pb(v[0]); 
    tr.pb(2 * (x - v[n - 1]));
    int ans = -1;
    for (auto &it : tr) ans = max(ans, it);

    cout << ans << endl;
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
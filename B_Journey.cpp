#include <bits/stdc++.h>
#define int long long
using namespace std;

bool abhi(int days, int a, int b, int c, int t) {
    int cs = days / 3;
    int d = cs * (a + b + c);
    int rem_days = days % 3;
    if (rem_days >= 1) d += a;
    if (rem_days >= 2) d += b;
    
    return d >= t;
}

void solve() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int l = 1;
    int r = 3e9;
    int ans = r;
    
    while (l <= r) {
        int mid = l + (r - l) / 2;
        
        if (abhi(mid, a, b, c, n)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    int cs = ans / 3;
    int remD = ans % 3;
    cout << (cs * 3 + remD) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
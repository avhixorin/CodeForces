#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(n == 1) return 1;
    
    ll max_size = n;
    for(int i = 2; i <= n; i++) {
        ll required_size = a[i-1] + i - 1;
        if(required_size >= n && required_size <= max_size + (i-1)) {
            max_size = max(max_size, required_size);
        }
    }
    
    return max_size;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << '\n';
    }
    
    return 0;
}
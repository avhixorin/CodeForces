#include <bits/stdc++.h>
#define int long long
#define vi vector<long long>
using namespace std;

void avhixorin() {
    int n,m,k; cin >> n >> m >> k;
    vi miss(m); for(auto &it:miss) cin >> it;
    vector<bool> pata(n+1, false);
    for(int i=0; i<k; i++) {
        int x; cin >> x;
        pata[x] = true;
    }
    
    if(k == n) {
        cout << string(m, '1') << "\n";
        return;
    }
    
    int un = n - k;
    string res;
    res.reserve(m);
    
    for(int i=0; i<m; i++) {
        bool cn = !pata[miss[i]];
        res += (un - cn == 0) ? '1' : '0';
    }
    cout << res << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--) avhixorin();
    return 0;
}
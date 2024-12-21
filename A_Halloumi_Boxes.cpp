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
#define vi vector<long>
#define pr pair
#define haa cout << "YES\n";
#define nahi cout << "NO\n";
using namespace std;

void avhixorin() {
    int n,k; 
    cin >> n >> k;
    vi in(n);
    for(auto &it: in) cin >> it;
    if(k == 1 && (!is_sorted(in.begin(), in.end()))){
        nahi
        return;
    }
    haa
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
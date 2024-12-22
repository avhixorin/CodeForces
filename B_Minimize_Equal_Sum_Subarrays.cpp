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
   int n;
   cin >> n;
   vi inp(n);
   for(int i = 0; i < n; i++) cin >> inp[i];
    if (n > 0) {
        rotate(inp.begin(), inp.end() - 1, inp.end());
    }
    for(int i = 0; i < n; i++) cout << inp[i] << " ";
    cout << endl;
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
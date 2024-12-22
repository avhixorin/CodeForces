#include <bits/stdc++.h>
#define int long long
#define pi pair<long, long>
#define vipi vector<pair<long, long>>
#define vi vector<long long>
#define pub push_back
#define pob pop_back
#define mp make_pair
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define umap unordered_map
#define uset unordered_set
#define pq priority_queue
#define haa cout << "YES\n";
#define nahi cout << "NO\n";
#define cut cout << endl;
using namespace std;

int gcd(int a, int b) {
    return __gcd(a, b);
}

void avhixorin() {
    int n;
    cin >> n;
    vi m(n);
    for (auto &it : m) cin >> it;
    vi s(n);
    for (auto &it : s) cin >> it;
    int md = 0;
    for (int i = 0; i < n; ++i) {
        int d = m[i];
        if (i + 1 < n) {
            d -= s[i + 1];
        }
        md += max(0LL, d);
    }

    cout << md << '\n';
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

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
#define st set
#define in(x) insert(x)
#define er(x) erase(x)
#define pq priority_queue
#define haa cout << "YES\n";
#define nahi cout << "NO\n";
#define cut cout << endl;
#define lele(vec) for (auto &i : vec) cin >> i;
#define dekho(vec) for (auto i : vec) cout << i << " ";

using namespace std;
int gcd(int a, int b) {
    return __gcd(a, b);
}


void avhixorin() {
   int n,d; cin >> n >> d;
   cout << 1 << " ";
   if(d % 3 == 0 || n>=3) cout << 3 << " ";
   if(d == 5 || d == 0) cout << 5 << " ";
    if(d % 7 == 0 || n > 2) cout << 7 << " ";
    if(d % 9 == 0 || ((d == 3 || d == 6) && n > 2) || n > 5) cout << 9 << " ";
    cut
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
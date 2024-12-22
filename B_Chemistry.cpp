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
    int n,k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> mpp;
    for(auto it:s) mpp[it]++;
    int odd = 0;
    for(auto it: mpp){
        if((it.second & 1) != 0) odd++;
    }
    if (k >= (odd - 1)) {
        haa
    } else {
        nahi
    }
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
#include <bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin() +1, (x).end()
#define int long long
#define pi pair<long, long>
#define vipi vector<pair<long, long>>
#define vi vector<long long>
#define pub push_back
#define pob pop_back
#define lb lower_bound
#define ub upper_bound
#define umap unordered_map
#define st set
#define in(x) insert(x)
#define er(x) erase(x)
#define pq priority_queue
#define haa cout << "YES\n"
#define nahi cout << "NO\n"
#define cut cout << endl
#define lele(vec) for (auto &i : vec) cin >> i
#define dekho(vec) for (auto i : vec) cout << i << " "

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

// Debugging Tools
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" -> "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);

template <class T, class V> void _print(pair <T, V> p) { cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}"; }
template <class T> void _print(vector <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(set <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T> void _print(multiset <T> v) { cerr << "[ "; for (T i : v) { _print(i); cerr << " "; } cerr << "]"; }
template <class T, class V> void _print(map <T, V> v) { cerr << "[ "; for (auto i : v) { _print(i); cerr << " "; } cerr << "]"; }

bool isEven(int n) {
    return ((n & 1) == 0);
}




void avhixorin() {
    int n; cin >> n; vi v(n); lele(v);
    debug(v)
    vi ans;
    ans.pb(v[0]);
    debug(ans)
    for (int i = 1; i < n; i ++) {
        if (v[i] < v[i - 1]) {
            ans.pb(v[i]);
            ans.pb(v[i]);
        } else {
            ans.pb(v[i]);
        }
    }
    debug(ans)
    cout << ans.size() << endl;
    for (auto it : ans) cout << it << " ";
    cut;
}

signed main() {
    fastio();

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    int t;
    cin >> t;

    while (t--) {
        avhixorin();
    }

    return 0;
}
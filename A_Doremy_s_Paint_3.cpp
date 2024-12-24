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
#define haa cout << "YES\n"; return;
#define nahi cout << "NO\n"; return;
#define cut cout << endl;
#define lele(vec) for (auto &i : vec) cin >> i;
#define dekho(vec) for (auto i : vec) cout << i << " ";
using namespace std;

int gcd(int a, int b) {
    return __gcd(a, b);
}

void avhixorin() {
    int n; 
    cin >> n;
    vi vec(n); 
    lele(vec);
    if (n == 1 || n == 2) {
        haa
    }
    st<int> s;
    map<int, int> mpp;
    for (auto it : vec) {
        s.insert(it);
        mpp[it]++;
    }
    if (s.size() > 2) {
        nahi
    } else if (s.size() == 2) {
        auto it = s.begin();
        int first = *it;
        it++;
        int second = *it;
        if (n & 1) {
            if ((mpp[first] == n/2 && mpp[second] == (n+1)/2) || (mpp[first] == (n+1)/2 && mpp[second] == n/2)) {
                haa
            } else {
                nahi
            }
        } else {
            if (mpp[first] == n / 2 && mpp[second] == n / 2) {
                haa
            } else {
                nahi
            }
        }
    } else {
        haa
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

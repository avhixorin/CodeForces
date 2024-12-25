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
#define lele(vec)       \
    for (auto &i : vec) \
        cin >> i;
#define dekho(vec)     \
    for (auto i : vec) \
        cout << i << " ";

using namespace std;

int gcd(int a, int b)
{
    return __gcd(a, b);
}

void avhixorin()
{
    int n;
    cin >> n;
    vi vec(n);
    lele(vec);
    set<int> s;
    for(auto it: vec){
        s.insert(it);
    }
    if(s.size() == 1 && vec[0] == 1){
        cout << 1 << endl;
        return;
    }
    int count1 = 0, total2 = 0;
    for(int i = 0; i < n; i++) {
        if(vec[i] == 2) {
            total2++;
        }
    }
    int prefixCount = 0; 
    for(int i = 0; i < n; i++) {
        if(vec[i] == 2) {
            prefixCount++;
            if(prefixCount == total2 - prefixCount) { 
                cout << i + 1 << endl;
                return;
            }
        }
    }
    
    cout << -1 << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        avhixorin();
    }

    return 0;
}

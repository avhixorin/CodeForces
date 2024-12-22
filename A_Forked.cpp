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

int gcd(int a, int b)
{
    return __gcd(a, b);
}

void avhixorin()
{
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    vipi dir = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};
    set<pi> ak, aq;
    for (auto d : dir)
    {
        int x = xk + d.ff;
        int y = yk + d.ss;
        ak.insert({x, y});
        x = xq + d.ff;
        y = yq + d.ss;
        aq.insert({x, y});
    }
    int ans = 0;
    for(auto it: ak){
        if(aq.find(it) != aq.end())
            ans++;
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        avhixorin();
    }

    return 0;
}
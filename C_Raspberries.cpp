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

bool isEven(int n)
{
    return ((n & 1) == 0);
}

using namespace std;

int gcd(int a, int b)
{
    return __gcd(a, b);
}

void avhixorin()
{
    int n, k;
    cin >> n >> k;
    vi vec(n);
    lele(vec);

    int ans = k-1;
    int e = 0;
    for (auto it : vec)
    {   
        if(isEven(it)) e++;
        if (it % k == 0)
        {
            cout << 0 << endl;
            return;
        }else
        {
            int nxt = k - (it % k);
            ans = min(ans, nxt);
        }
    }
    if(k != 4){
        cout << ans << endl;
    }else{
        if(e >= 2){
            cout << 0 << endl;
        }else if(e == 1){
            cout << min(ans,1LL) << endl;
        }else{
            cout << min(ans,2LL) << endl;
        }
    }
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

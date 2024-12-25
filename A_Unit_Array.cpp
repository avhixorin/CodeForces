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
    lele(vec) 
    int mone = 0;
    int one = 0;
    for (auto it : vec)
    {
        if (it > 0)
        {
            one++;
        }
        else
        {
            mone++;
        }
    }
    
    if (mone <= one)
    {
        if ((mone & 1) == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    else
    {
            int ans = mone - (n / 2);
            if (((n / 2) & 1) != 0)
            {
                ans += 1;
            }
            cout << ans << endl;
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
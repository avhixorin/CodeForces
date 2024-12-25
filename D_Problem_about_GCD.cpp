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
   int l, r, G; cin >> l >> r >> G;
   int l1 = (l + G - 1) / G;
   int r1 = r / G;
    if (l1 == r1)
    {
        if (l1 == 1)
        {
            cout << G << " " << G << endl;
            return;
        }
        cout << -1 << " -1" << endl;
        return;
    }
    int mxd = 0;
    int ii, jj;
    bool f = false;
    for (int i = l1; i <= min(l1 + 200, r1); i++)
    {
        for (int j = r1; j >= max(l1, i); j--)
        {
            if (gcd(i, j) == 1)
            {
                if (mxd < (j - i + 1))
                {
                    mxd = j - i + 1;
                    ii = i;
                    jj = j;
                    f = true;
                }
                break;
            }
        }
    }
    if (f)
    {
        cout << G * ii << " " << G * jj << endl;
    }
    else
    {
        cout << "-1 -1" << endl;
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
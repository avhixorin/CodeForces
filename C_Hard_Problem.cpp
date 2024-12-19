#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define umap unordered_map
#define uset unordered_set
#define pq priority_queue
#define vt vector
#define pr pair
#define yep cout << "YES\n";
#define nope cout << "NO\n";
using namespace std;

void avhixorin()
{
    int m, a, b, c;
    cin >> m >> a >> b >> c;
    int ans = 0;
    if (a == m && b == m)
    {
        cout << a + b << endl;
        return;
    }
    ans += min(a, m);
    int rem = max(0LL, m - a);
    ans += min(b, m);
    rem += max(0LL, m - b);
    ans += min(c, rem);
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
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
    int n, x, y;
    cin >> n >> x >> y;
    if ((x == 1 && y == n) || (y = x + 1))
    {
        if ((n & 1) == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i % 2 << " ";
            }
            cout << endl;
            return;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << i % 2 << " ";
            }
            cout << 2 << endl;
            return;
        }
    }
    else
    {
        vt<int> v(n);
        v[x - 1] = 0;
        v[y - 1] = 0;
        for (int i = 0; i < y - 1; i++)
        {
            v[i] = 1 - v[i - 1];
        }
        if (v[y - 1] == v[y - 2])
        {
            v[y - 2] = 2;
        }
        int prev = v[y - 1];
        int cnt = 2;
        for (int i = y % n; i != x - 1; i = (i + 1) % n)
        {
            cnt++;
        }
        if (cnt & 1)
        {
            v[y % 2] = 2;
            for (int i = (y + 1) % n; i != x - 1; i = (i + 1) % n)
            {
                v[i] = 1 - prev;
                prev = v[i];
            }
        }
        else
        {
            for (int i = y % n; i != x - 1; i = (i + 1) % n)
            {
                v[i] = 1 - prev;
                prev = v[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
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
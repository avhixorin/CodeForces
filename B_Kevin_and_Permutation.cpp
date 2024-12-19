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
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        return;
    }

    vector<int> sperm(n);
    int tr = 0;
    for (int i = 1; i <= n / k; i++)
    {
        sperm[tr] = i;
        tr += k;
    }
    int abhi = (n / k) + 1;
    for (int i = 0; i < n; i++)
    {
        if (sperm[i] == 0)
        {
            sperm[i] = abhi;
            abhi++;
        }
    }
    int j = 0;
    for (int i = k; i <= n; i += k)
    {
        swap(sperm[i - 1], sperm[j * k]);
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << sperm[i] << " ";
    }
    cout << endl;
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
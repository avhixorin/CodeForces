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
#define vi vector<long long>
#define pr pair
#define haa cout << "YES\n";
#define nahi cout << "NO\n";
using namespace std;

int gcd(int a, int b)
{
    return __gcd(a, b);
}

void avhixorin()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int ans = 0;
    int i = 0;
    int j = 0;
    int cnt = 0;
    while (i < n)
    {
        cnt = 0;
        j = i;
        if (s[i] == '.')
        {
            while (j < n && s[j] == '.')
            {
                j++;
                cnt++;
            }
            if (cnt >= 3)
            {
                cout << 2 << endl;
                return;
            }
            else
            {
                ans += cnt;
            }
            i = j + 1;
        }
        else
        {
            i++;
        }
    }

    cout << ans << "\n";
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
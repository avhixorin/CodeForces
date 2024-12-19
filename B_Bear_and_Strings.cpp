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
    string s;
    cin >> s;
    int size = s.size();
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 3; j < size; j++)
        {
            if (s.substr(i, j) == "bear")
            {
                ans++;
                ans += (size - 4 - i);
                ans += (i - 1);
                break;
            }
        }
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    avhixorin();

    return 0;
}
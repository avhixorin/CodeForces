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

void avhixorin() {
    int n, k;
    cin >> n >> k;
    vector<int> sperm(n, 0);
    int cunt = 1;
    for (int i = k - 1; i < n; i += k) {
        sperm[i] = cunt;
        cunt++;
    }
    for (int i = 0; i < n; i++) {
        if(sperm[i]){
            cout << sperm[i] << " ";
        }else{
            cout << cunt << " ";
            cunt++;
        }
        
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
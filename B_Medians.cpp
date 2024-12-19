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
// gaand faad denge
void avhixorin() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }

    if (n == 1 && k == 1) {
        cout << 1 << endl;
        return;
    }
    if (k >= n) {
        cout << -1 << endl;
        return;
    }
    

    if( k%2 == 0){
        cout << 3 << endl;
        cout << 1 << " " << k << " " << k+1 << endl;
    }else{
        cout << 5 << endl;
        cout << 1 << " " << k-1 << " "<< k << " " << k+1 << " " << k+2 << endl;
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
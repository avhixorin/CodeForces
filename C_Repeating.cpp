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
 int n;
    cin >> n;
    vector<int> a(n), b(n);
    unordered_map<int, int> dekha;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (dekha.find(a[i]) != dekha.end()) {
            b[i] = dekha[a[i]] + 1; 
        } else {
            b[i] = -1; 
        }
        dekha[a[i]] = i; 
    }
\
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


        avhixorin();


    return 0;
}
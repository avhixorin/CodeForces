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
#define haa cout << "YES\n";
#define nahi cout << "NO\n";
using namespace std;

void avhixorin(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cs = 0;
    int cp = 0;
    int si = -1;
    int pi = -1;
    int ind = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 's') {
            cs++;
            si = ind;
        }
        if(s[i] == 'p') {
            cp++;
            if(pi == -1) pi = ind;
        }
        ind++;
    }
    if(cs == 0 || cp == 0){
        haa
        return;
    }
    if(si == 0 || pi == n - 1){
        haa
        return;
    }
    nahi
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
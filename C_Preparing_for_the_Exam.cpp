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
#define uset unordered_set
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
   int n,m,k; cin >> n >> m >> k;
    vi ques(m); lele(ques);
    vi pata(k); lele(pata);

    if(k == n){
        for(int i = 0; i < m; i++) cout << 1;
        cout << endl;
    }else if(k < n-1){
        for(int i = 0; i < m; i++) cout << 0;
        cout << endl;
    }else{
        int temp = 1;
        for(auto it: pata) {
            if (it == temp) {
                temp++;
            } else {
                continue;
            }
        }
        for(auto it: ques){
            if(it == temp) cout << 1;
            else cout << 0;
        }
        cut
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
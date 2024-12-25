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
#define st set
#define in(x) insert(x)
#define er(x) erase(x)
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
   string s; cin >> s;
   if(s.size() == 1){
    cout << 1 << endl;
    return;
   }
   int o = 0;
   int z = 0;
   for(auto it: s){
    it == '0' ? z++ : o++;
   }
   for(auto it: s){
    if(it == '1' && z > 0){
        z--;
    }else if(it == '0' && o > 0){
        o--;
    }else{
        cout << abs(z-o) << endl; 
        return;
    }
   }
   cout << 0 << endl;
   
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
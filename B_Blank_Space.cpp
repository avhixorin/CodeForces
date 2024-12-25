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
   int n; cin >> n;
   vi vec(n); lele(vec)
   int maxi = 0;
   int i = 0;
   int j = 0;
   int count = 0;
   while(i<n){
    count = 0;
    if(vec[i] == 0){
        j = i;
        while(vec[j] == 0 && j < n) {
            count++;
            j++;
        }
        maxi = max(maxi,count);
        i = j;
    }
    i++;
   }
   cout << maxi << endl;
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
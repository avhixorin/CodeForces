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

int gcd(int a, int b) {
    return __gcd(a, b);
}

void avhixorin() {
   int n; 
   cin >> n;
   if(n <= 4){
       cout << -1 << endl;
       return;
   }
   for(int i = 1; i <= n; i += 2){
       if(i != 5) cout << i << " ";
   }
   cout << 5 << " " << 4 << " ";
   for(int i = 2; i <= n; i += 2){  
       if(i != 4) cout << i << " ";
   }
   cout << endl;
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

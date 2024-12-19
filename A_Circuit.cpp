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
    vector<int> switches(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> switches[i];
    }

    int min = 0;
    int zeros =0,ones=0;

    for (int i = 0; i < 2 * n; i++) {
        min ^= switches[i];
        if(switches[i] == 0){
            zeros++;
        }else{
            ones++;
        }
    }
    if(zeros >= ones){
       cout << min << " " << ones << endl; 
    }else {
        cout << min << " " << zeros << endl; 
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
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
   vector<int>rows(5,0);
    vector<vector<int>>board(5, vector<int>(5, 0));
    pair<int,int> loc;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> board[i][j];
            if(board[i][j] == 1){
                loc.first = i;
                loc.second = j;
            }
        }
    }
    cout << (abs(2 - (loc.first))) + (abs(2 - (loc.second))) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    avhixorin();


    return 0;
}
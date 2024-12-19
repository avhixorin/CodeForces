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

void avhixorin()
{
    int n, k;
    cin >> n >> k;
    
    vector<vector<int>> input(k, vector<int>(2));

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> input[i][j];
        }
    }
    
    map<int,int>mp;
    for (int i = 0; i < k; i++)
    {
        mp[input[i][0]]+=input[i][1];
    }
    vector<int>arr;

    for(auto it:mp){
        arr.push_back(it.second);
    }
    sort(arr.rbegin(),arr.rend());
    if(n > arr.size()){
        cout << accumulate(arr.begin(),arr.end(),0) << endl;
    }else{
        cout << accumulate(arr.begin(),arr.begin()+n,0) << endl;
    }

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

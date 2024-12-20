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
    string s;
    cin >> s;
    string s1 = s;
    int ind = -1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0') {
            ind = i;
            break;
        }
    }
    if (ind == -1) {
        cout << "1 " << s.size() << " 1 1" << endl;
        return;
    }
    if (ind == -1) ind = s.size() - 1;
    int s2s = s.size() - ind;

    vt<pair<string, pii>> ans;
    for (int i = 0; i <= s.size() - s2s; i++) {
        string res;
        for (int j = 0; j < s2s; j++) {
            if (s[j + ind] == s[j + i]) {
                res += '0';
            } else {
                res += '1';
            }
        }
        ans.pb({res, {i + 1, i + s2s}});
    }
    string maxXor = "";
    int ansS = 1, ansE = 1;

    for (auto &p : ans) {
        if (p.ff > maxXor) {
            maxXor = p.first;
            ansS = p.ss.ff;
            ansE = p.ss.ss;
        }
    }
    cout << "1 " << s.size() << " " << ansS << " " << ansE << endl;
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
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    string temp = x;
    int count = 0;
    if (temp.find(s) != string::npos) {
        cout << count << endl;
        return;
    }
    while (temp.size() < n * m + m) {
        temp += x;
        count++;
        if (temp.find(s) != string::npos) {
            cout << count << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

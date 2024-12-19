#include <bits/stdc++.h>
#define int long long
using namespace std;

void avhixorin() {
    int n, m;
    cin >> n >> m;
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int ansF = 0;

    for (int start = 0; start < n; start++) {
        int current_sum = 0; 
        for (int end = start; end < n; end++) {
            current_sum += input[end];
            ansF += current_sum % m;  
        }
    }

    cout << ansF << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    avhixorin();

    return 0;
}

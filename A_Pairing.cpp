#include <bits/stdc++.h>
#define int long long
using namespace std;

void avhixorin() {
    vector<int> input(4);
    for (int i = 0; i < 4; i++) {
        cin >> input[i];
    }
    sort(input.begin(), input.end());

    if (input[0] == input[1] && input[2] == input[3] && input[0] != input[2]) {
        cout << 2 << endl;  
    } 
    else if (input[0] == input[1] && input[1] == input[2] && input[2] == input[3]) {
        cout << 2 << endl;
    } 
    else if ((input[0] == input[1] && input[1] == input[2]) || 
             (input[1] == input[2] && input[2] == input[3])) {
        cout << 1 << endl;  
    } 
    else if (input[0] == input[1] || input[1] == input[2] || input[2] == input[3]) {
        cout << 1 << endl;
    } 
    else {
        cout << 0 << endl;  
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

        avhixorin();
 

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        long long int n; 
        int m, q;   
        cin >> n >> m >> q;
        
        vector<int> a(m);
        vector<int> b(q);
  
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < q; i++) {
            cin >> b[i];
        }

        int count = 0;
        int d1 = 0, d2 = 0;
        if (b[0] < a[0] && b[0] < a[1]) {
            cout << b[0] << endl;
        } else if (b[0] > a[0] && b[0] > a[1]) {
            d1 = min(b[0] - a[0], b[0] - a[1]);
            cout << " " << endl;
        } else {
             else {
                while(d2 > d1){
                    count++;
                }
            }
        }
    }

    return 0;
}

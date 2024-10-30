#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;
int rmv(int cur, int prev, int shft) {
    if (shft > 30) return 1;
    return cur < prev * (1LL << shft);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<long long> pw(n * 32 + 1);
        pw[0] = 1;
        
        for (int i = 1; i <= n * 32; i++) {
            pw[i] = pw[i - 1] * 2 % MOD;
        }

        long long res = 0;
        int cnt = 0;
        vector<int> u(n);
        vector<int> s(n);

        for (int i = 0; i < n; i++) {
            int cv = a[i], sh = 0;
            while (cv % 2 == 0) {
                cv /= 2;
                sh++;
            }
            while (cnt > 0 && rmv(u[cnt - 1], cv, sh)) {
                res = (res - u[cnt - 1] * pw[s[cnt - 1]] % MOD + MOD) % MOD;
                res = (res + u[cnt - 1]) % MOD;
                sh += s[cnt - 1];
                cnt--;
            }

            u[cnt] = cv;
            s[cnt] = sh;
            cnt++;

            res = (res + u[cnt - 1] * pw[s[cnt - 1]]) % MOD;
            cout << res << " ";
        }
        cout << endl;
    }
    return 0;
}

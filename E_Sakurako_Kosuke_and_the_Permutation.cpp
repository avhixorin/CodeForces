#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        p[i]--; 
    }

    vector<bool> visited(n, false);
    int operations = 0;

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            int cycle_size = 0;
            int x = i;
            while (!visited[x]) {
                visited[x] = true;
                x = p[x]; 
                cycle_size++;
            }
            
            if (cycle_size > 1) {
                operations += cycle_size - 1;
            }
        }
    }

    cout << operations << endl;
    return 0;
}


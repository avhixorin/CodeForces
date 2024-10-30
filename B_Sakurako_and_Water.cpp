#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int temp;
        vector<int> matrix;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> temp;
                matrix.push_back(temp);
            }
        }
        
        int ans = 0;
        for (int start_col = n - 1; start_col >= 0; --start_col) {
            int row = 0, col = start_col;
            int minInDiag = INT_MAX; 
            bool hasNegative = false;
            
            while (row < n && col < n) {
                if (matrix[row * n + col] < 0) {
                    hasNegative = true;
                }
                minInDiag = min(minInDiag, matrix[row * n + col]);
                row++;
                col++;
            }
            if (!hasNegative) {
                minInDiag = 0;
            } else {
                ans += abs(minInDiag); 
            }
        }

        for (int start_row = 1; start_row < n; ++start_row) {
            int row = start_row, col = 0;
            int minInDiag = INT_MAX; 
            bool hasNegative = false; 
            
            while (row < n && col < n) {
                if (matrix[row * n + col] < 0) {
                    hasNegative = true;
                }
                minInDiag = min(minInDiag, matrix[row * n + col]);
                row++;
                col++;
            }
            if (!hasNegative) {
                minInDiag = 0;
            } else {
                ans += abs(minInDiag);
            }
        }

        cout << ans << endl;
    }

    return 0;
}

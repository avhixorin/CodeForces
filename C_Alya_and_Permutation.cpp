#include <iostream>
#include <vector>
using namespace std;

// Function to check if permutation meets the criteria
bool isValidPermutation(const vector<int>& perm) {
    for (int i = 1; i < perm.size(); i++) {
        // Check if absolute difference with previous element is <= 2
        if (abs(perm[i] - perm[i-1]) > 2) {
            return false;
        }
    }
    return true;
}

// Function to generate valid permutation for given n
vector<int> generatePermutation(int n) {
    vector<int> permutation;
    
    // For n = 1 or 2, return simple permutations
    if (n == 1) {
        return {1};
    }
    if (n == 2) {
        return {1, 2};
    }
    
    // For n = 3, no valid permutation exists
    if (n == 3) {
        return {}; // Return empty vector to indicate impossible case
    }
    
    // For n = 4
    if (n == 4) {
        return {2, 4, 3, 1};
    }
    
    // For n >= 5, use a systematic approach
    // Start from the middle, then alternate between higher and lower numbers
    int mid = n / 2;
    permutation.push_back(mid);
    
    int high = mid + 1;
    int low = mid - 1;
    bool useHigh = true;
    
    while (high <= n || low >= 1) {
        if (useHigh && high <= n) {
            permutation.push_back(high++);
        } else if (!useHigh && low >= 1) {
            permutation.push_back(low--);
        }
        useHigh = !useHigh;
    }
    
    // Verify the generated permutation
    if (!isValidPermutation(permutation)) {
        // If the generated permutation is not valid, try alternate approach
        permutation.clear();
        for (int i = 2; i <= n; i += 2) {
            permutation.push_back(i);
        }
        for (int i = 1; i <= n; i += 2) {
            permutation.push_back(i);
        }
    }
    
    return permutation;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> result = generatePermutation(n);
        
        if (result.empty()) {
            cout << "-1" << endl; // Impossible case
        } else {
            for (int i = 0; i < result.size(); i++) {
                cout << result[i] << (i < result.size()-1 ? " " : "");
            }
            cout << endl;
        }
    }
    return 0;
}
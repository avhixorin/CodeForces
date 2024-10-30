#include <iostream>
#include <vector>
#include <climits> 

#define rep(i, a, b) for(int i = a; i <= b; i++)
#define vi std::vector<int>

void avhixorin() {
    int n;
    std::cin >> n;
    vi a(n);
    rep(i, 0, n - 1) std::cin >> a[i];

    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        cnt += i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) cnt++;
        }
        mini = std::min(cnt, mini);
    }
    std::cout << mini << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;
    while (t--) {
        avhixorin();
    }
    return 0;
}

#include <bits/stdc++.h>
#define int long long
#define pi pair<long, long>
#define vipi vector<pair<long, long>>
#define vi vector<long long>
#define pub push_back
#define pob pop_back
#define mp make_pair
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define umap unordered_map
#define st set
#define in(x) insert(x)
#define er(x) erase(x)
#define pq priority_queue
#define haa cout << "YES\n";
#define nahi cout << "NO\n";
#define cut cout << endl;
#define lele(vec) for (auto &i : vec) cin >> i;
#define dekho(vec) for (auto i : vec) cout << i << " ";

using namespace std;

int gcd(int a, int b) {
    return __gcd(a, b);
}

int maxSubarraySum(vector<int> &arr)
{
    if (!arr.size())
    {
        return 0;
    }
    int res = arr[0];
    int maxEnding = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return max(res, 0ll);
}

void avhixorin() {
    int n;
    cin >> n;
    vi vec(n);
    lele(vec);
    int unInd = -1;
    int unEle = 0; 
    for (int i = 0; i < n; i++) {
        if (vec[i] != 1 && vec[i] != -1) {
            unInd = i;
            unEle = vec[i];
        }
    }
    set<int> s1, s2;
    s1.insert(0);
    s2.insert(0);
    if (unInd != -1) {
        int sum = 0;
        for (int i = unInd + 1; i < n; i++)
        {
            sum += vec[i];
            s1.insert(sum);
        }
        sum = 0;
        for (int i = unInd - 1; i >= 0; i--)
        {
            sum += vec[i];
            s2.insert(sum);
        }
        int l = *(s1.begin()) + *(s2.begin()), r = *(s1.rbegin()) + *(s2.rbegin());
        int a1 = l + vec[unInd];
        int b1 = r + vec[unInd];
        vi v1, v2, v3, v4;
        for (int i = 0; i < unInd; i++)
        {
            v1.pub(vec[i]);
            v2.pub(-vec[i]);
        }
        for (int i = unInd + 1; i < n; i++)
        {
            v3.pub(vec[i]);
            v4.pub(-vec[i]);
        }
        int b2 = maxSubarraySum(v1);
        int a2 = -maxSubarraySum(v2);
        int b3 = maxSubarraySum(v3);
        int a3 = -maxSubarraySum(v4);
        set<int> ans;
        for (int i = a1; i <= b1; i++)
        {
            ans.insert(i);
        }
        for (int i = a2; i <= b2; i++)
        {
            ans.insert(i);
        }
        for (int i = a3; i <= b3; i++)
        {
            ans.insert(i);
        }
        ans.insert(0);
        cout << ans.size() << endl;
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cut
    } else {
        int max = maxSubarraySum(vec);
        for (auto &it : vec) {
            it = -it;
        }
        int min = -maxSubarraySum(vec);
        cout << max - min + 1 << endl;
        for (int i = min; i <= max; i++) {
            cout << i << " ";
        }
        cut;
    }
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
#include <bits/stdc++.h>
#define int long long
#define pii pair<int, int>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define umap unordered_map
#define uset unordered_set
#define pq priority_queue
#define vi vector<long long>
#define pr pair
#define haa cout << "YES\n";
#define nahi cout << "NO\n";
using namespace std;

int gcd(int a, int b)
{
    return __gcd(a, b);
}

void avhixorin()
{
    int xc, yc, k;
    cin >> xc >> yc >> k;
    int fac = 1;
    int count = 0;
    if ((k & 1) == 0)
    {
        while (k--)
        {
            if ((k & 1) != 0){
                count++;
                cout << xc + fac << " " << yc + fac << endl;
            }
            else{
                count++;
                cout << xc - fac << " " << yc - fac << endl;
            }
             if(count %2 == 0)
                fac++;
        }
    }
    else
    {
        cout << xc << " " << yc << endl;
        --k;
        while (k--)
        {
            if (k & 1)
            {
                count++;
                cout << xc + fac << " " << yc + fac << endl;
            }
            else
            {   
                count++;
                cout << xc - fac << " " << yc - fac << endl;
            }
            if(count%2 == 0)
                fac++;
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        avhixorin();
    }

    return 0;
}
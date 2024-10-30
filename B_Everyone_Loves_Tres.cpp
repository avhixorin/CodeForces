#include <bits/stdc++.h>
using namespace std;
void avhixorin()
{
    int n;
        cin >> n;
        if(n==1||n==3) {cout << -1<<endl;return ;}
        string s(n, '3');
        s[n-1]='6';
        s[n-2]='6';
        string str=s;
        str[n-4]='6';
        if(n%2==0)cout<<s<<endl;
        if(n%2!=0)cout<<str<<endl;

}

int main() {
    int t;
    cin >> t;

    while (t--) {
        avhixorin();

    }

    return 0;
}
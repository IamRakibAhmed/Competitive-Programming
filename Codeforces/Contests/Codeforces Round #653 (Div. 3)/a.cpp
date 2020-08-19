#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t;
    cin >> t;

    while (t--)
    {
        ll x, y, n, res;
        cin >> x >> y >> n;

        ll m = n / x;
        ll a = (x * m) + y;
        ll b = (x * (m - 1)) + y;

        if (a > n)
            res = b;
        else
            res = a;
        
        cout << res << endl;
    }
    
    return 0;
}
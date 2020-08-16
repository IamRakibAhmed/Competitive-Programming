#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
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
        ll a, b, c;
        cin >> a >> b >> c;

        if ((2 * b) <= c)
            cout << (a * b) << endl;
        else 
        {
            ll res;
            if (a % 2 == 0)
               res = (a * c) / 2;
            else
            {
                res = ((a - 1) * c) / 2;
                res += b;
            }
            cout << res << endl;
        }
    }
    
    return 0;
}
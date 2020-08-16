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
        ll n, res;
        cin >> n;

        if (n % 2 == 0)
            cout << n / 2 << endl;
        else
        {
            ll div = n / 2;
            res = div + (n % 2);

            cout << res << endl;
        }
    }
    
    return 0;
}
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
        ll n, x;
        cin >> n >> x;

        ll sum = 0, mx = 0;
        for (int i = 1; i <= n; i++)
        {
            ll val;
            cin >> val;

            mx += (val + x - 1) / x;
            sum += val;
        }

        ll mn = (sum + x - 1) / x;
        cout << mn << " " << mx << endl;
    }

    return 0;
}
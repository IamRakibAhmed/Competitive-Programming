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
        ll n;
        cin >> n;

        vector<ll> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll x = a[0];
        ll y = a[1];
        ll z = a[n - 1];

        if (x + y > z)
            cout << "-1" << endl;
        else 
            cout << 1 << " " << 2 << " " << n << endl;
    }
    
    return 0;
}
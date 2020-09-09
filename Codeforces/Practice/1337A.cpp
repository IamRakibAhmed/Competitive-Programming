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
        vector<ll> a(4, 0);
        for (int i = 0; i < 4; i++)
            cin >> a[i];

        ll x = max(a[0], a[1]);
        ll y = max(a[1], a[2]);
        ll z = min(a[2], a[3]);

        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
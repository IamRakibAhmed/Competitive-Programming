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
        ll n, r;
        cin >> n >> r;

        ll mn = min(n - 1, r);
        ll res = mn * (mn + 1) / 2;

        if (r >= n)
            res++;

        cout << res << endl;
    }
    
    return 0;
}
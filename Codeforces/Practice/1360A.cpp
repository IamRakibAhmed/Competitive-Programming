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
        int a, b;
        cin >> a >> b;

        int mx = max(2 * a, b);
        int mn = max(2 * b, a);

        int res = min(mx, mn);
        cout << res * res << endl;
    }

    return 0;
}
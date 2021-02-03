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
        int n;
        cin >> n;

        ll ans = 1 << n;
        for (int i = 1; i < n / 2; i++)
            ans += 1 << i;
        for (int i = n / 2; i < n; i++)
            ans -= 1 << i;

        cout << ans << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
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
        int x;
        cin >> x;
        int c = 0;
        int n = x % 10;

        while (x > 0)
        {
            c++;
            x /= 10;
        }

        int res = ((n - 1) * 10) + (c * (c + 1)) / 2;
        cout << res << endl;
    }

    return 0;
}
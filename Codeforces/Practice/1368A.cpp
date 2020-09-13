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
    cin  >> t;

    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        int c = 0;
        while (a <= n || b <= n)
        {
            if (a > n || b > n) break;
            if (a > b) b += a;
            else a += b;

            c++;
        }

        cout << c << endl;
    }

    return 0;
}
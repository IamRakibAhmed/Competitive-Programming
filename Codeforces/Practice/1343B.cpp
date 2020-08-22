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

        if (n % 4 != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;

            ll sum = 0, tot = 0;
            for (int i = 2; i <= n; i += 2)
            {
                sum += i;
                cout << i << " ";
            }

            for (int i = 1; i < n - 1; i += 2)
            {
                tot += i;
                cout << i << " ";
            }

            cout << sum - tot << endl;
        }
        
    }

    return 0;
}
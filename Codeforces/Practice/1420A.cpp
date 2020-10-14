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
        for (int i = 0; i < n; i++) cin >> a[i];

        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i - 1] <= a[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}
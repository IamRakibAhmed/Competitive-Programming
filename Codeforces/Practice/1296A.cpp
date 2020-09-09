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

        int ec = 0, oc = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if (x % 2 == 0) ec++;
            else oc++;
        }

        if ((oc > 0 && ec > 0) || (oc > 0 && n % 2 != 0))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}
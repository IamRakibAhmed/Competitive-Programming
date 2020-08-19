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
        int n, elem;
        cin >> n;

        vector<ll> a(n, 0), b(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                a[i] = -abs(a[i]);
            else
                a[i] = abs(a[i]);
        }

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }
    
    
    return 0;
}
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
        int n = 3;
        ll a[n + 1];
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a, a + n);
        a[3] = a[2] + a[1];
        cout << a[3] << endl;
    }

    return 0;
}
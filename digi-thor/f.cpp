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

    for (int j = 1; j <= t; j++)
    {
        ll d, f = 0;
        cin >> d;

        ll sum = (d * (d + 1)) / 2;
        for (int i = 5; i <= d; i += 5)
            f += i;

        cout << "Case " << j << ": " << sum - f << endl;
    }

    return 0;
}
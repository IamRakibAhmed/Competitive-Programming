#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    int sx, sy, sz;
    sx = sy = sz = 0;

    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        sx += x;
        sy += y;
        sz += z;
    }

    if (sx == 0 && sy == 0 && sz == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool solve(ll a, ll b, ll c)
{
    for (int i = 0; a * i <= c; i++)
    {
        ll rem = c - a * i;
        if (rem % b == 0) return true;
    }

    return false;
}
 
int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll a, b, c;
    cin >> a >> b >> c;

    bool res = solve(a, b, c);
    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
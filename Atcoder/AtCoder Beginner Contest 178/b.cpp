#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<bitset>
#include<cassert>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<fstream>
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

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll x = max(a, b);
    ll y = max(c, d);

    ll p = min(a, b);
    ll q = min(c, d);

    ll com1 = x * y;
    ll com3 = p * q;
    ll com4 = x * q;
    ll com5 = y * p;

    ll res = max(com1, max(com3, max(com4, com5)));

    cout << res << endl;

    return 0;
}
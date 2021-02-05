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

    int a, b, c;
    cin >> a >> b >> c;

    int p = a + b * c;
    int q = a * (b + c);
    int r = a * b * c;
    int s = (a + b) * c;
    int t = a + b + c;
    int u = a * b + c;

    cout << max(max(p, max(q, r)), max(s, max(t, u))) << endl;

    return 0;
}
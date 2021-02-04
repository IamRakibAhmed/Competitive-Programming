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

    int cnt = 0;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a == 1 && b == 1) || (a == 1 && c == 1) || (b == 1 && c == 1)) cnt++;
    }

    cout << cnt << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll a, b, n, m;
        cin >> a >> b >> n >> m;

        ll mn = min(a, b);

        if ((mn < m) || (a + b) < (n + m))
            cout << "No" << endl;
        else
            cout << "Yes" << endl;   
    }
    
    return 0;
}
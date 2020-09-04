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
        ll a, b;
        cin >> a >> b;

        ll diff = abs(a - b);

        if (diff == 0)
            cout << diff << endl;
        else
        {
            if (diff % 10 == 0)
                cout << diff / 10 << endl;
            else 
                cout << (diff / 10) + 1 << endl;
        }
    }

    return 0;
}
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
        ll a, b, n, c = 0;
        cin >> a >> b >> n;
        
        if (a < b)
            swap(a, b);

        while (a <= n && b <= n)
        {
            b += a;
            c++;

            if (a <= n && b <= n)
            {
                a += b;
                c++;
            }
        }

        cout << c << endl;
    }
    
    return 0;
}
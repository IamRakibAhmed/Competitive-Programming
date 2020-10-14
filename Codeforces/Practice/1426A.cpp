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
        int n, x;
        cin >> n >> x;

        if (n <= 2) cout << 1 << endl;
        else
        {
            int c = 1;
            int f = x;
            x += 2;
            while (x < n)
            {
                x += f;
                c++;
            }

            cout << c + 1 << endl;
        }
    }

    return 0;
}
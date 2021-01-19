#include <bits/stdc++.h>
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
        int n, k, x, y;
        cin >> n >> k >> x >> y;
        if (x == y) cout << n << " " << n << endl;
        else
        {
            if (x > y)
            {
                int X[4] = {0, 0, 0, 0};
                int Y[4] = {0, 0, 0, 0};
                X[0] = n;
                Y[0] = y + n - x;
                X[3] = x - y;
                Y[3] = 0;
                X[1] = Y[0];
                Y[1] = X[0];
                X[2] = Y[3];
                Y[2] = X[3];

                int idx = (k - 1) % 4;
                cout << X[idx] << " " << Y[idx] << endl;
            }
            else
            {
                int X[4] = {0, 0, 0, 0};
                int Y[4] = {0, 0, 0, 0};
                X[0] = x + n - y;
                Y[0] = n;
                X[3] = 0;
                Y[3] = y - x;
                X[1] = Y[0];
                Y[1] = X[0];
                X[2] = Y[3];
                Y[2] = X[3];
                
                int idx = (k - 1) % 4;
                cout << X[idx] << " " << Y[idx] << endl;
            }
        }
    }

    return 0;
}
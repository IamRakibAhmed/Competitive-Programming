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
        int n;
        cin >> n;
        vector<int> a(n, 0);
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                x++;
        }
        if (x == 1)
            cout << 0 << endl;
        else
        {
            int x = 0;
            int y = 0;
            int i = 0;
            bool flag = false;

            while (i < n)
            {
                if (a[i] == 1)
                {
                    if (flag)
                        x += y;
                    flag = true;
                    y = 0;
                }
                else y++;

                i++;
            }

            cout << x << endl;
        }
    }

    return 0;
}
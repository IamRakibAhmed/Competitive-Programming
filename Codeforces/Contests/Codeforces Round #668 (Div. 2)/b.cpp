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

        ll neg = 0, pos = 0, res = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;

            if (num > 0)
                pos += num;
            else
            {
                num *= -1;
                if (pos > num)
                    pos -= num;
                else
                {
                    res += (num - pos);
                    pos = 0;
                }
            }
        }

        cout << res << endl;
    }

    return 0;
}
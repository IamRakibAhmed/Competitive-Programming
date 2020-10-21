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
        set<int> s;
        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert(x);

            a[i] = x;
        }

        if (s.size() == 1)
            cout << -1 << endl;
        else
        {
            int mx = *max_element(a.begin(), a.end());
            int res = 0;

            for (int i = 0; i <= n - 1; i++)
            {
                bool flag = false;
                if (a[i] == mx && i - 1 >= 0 && a[i - 1] < a[i])
                    flag = true;

                if (a[i] == mx && i + 1 < n && a[i + 1] < a[i])
                    flag = true;

                if (flag)
                {
                    res = i + 1;
                    break;
                }
            }

            cout << res << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define SIZE 100005

int a[SIZE * 2];

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
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            int indx;
            cin >> indx;
            if (a[indx] == 0) res++;
            a[indx]++;
        }
        bool flag = false;
        for (int i = 1; i <= n * 2 + 1; i++)
        {
            if (a[i] > 1) flag = true;
            if (a[i] == 0 && flag)
            {
                flag = false;
                res++;
            }
        }
        cout << res << endl;
        for (int i = 0; i <= n * 2; i++) a[i] = 0;
    }

    return 0;
}
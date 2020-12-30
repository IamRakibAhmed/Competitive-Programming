#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a[50];
bool check[50];

int calc(int a)
{
    if (a < 0) return -a;
    return a;
}

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
        memset(a, 0, sizeof(a));
        memset(check, 0, sizeof(check));

        int n;
        cin >> n;
        int c = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int x = calc(a[i] - a[j]);
                if (i != j && !check[x])
                {
                    c++;
                    check[x] = true;
                }
            }
        }
        cout << c << endl;
    }

    return 0;
}
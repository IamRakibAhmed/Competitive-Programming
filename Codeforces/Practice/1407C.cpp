#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a[10010];

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    int u = 1;
    for (int i = 2; i <= n; i++)
    {
        int x, y;
        cout << "? " << u << " " << i << endl;
        fflush(stdout);
        cin >> x;
        cout << "? " << i << " " << u << endl;
        fflush(stdout);

        cin >> y;
        if (x > y)
        {
            a[u] = x;
            u = i;
        }
        else
            a[i] = y;
    }

    a[u] = n;
    cout << "! ";
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";

    cout << endl;
    fflush(stdout);

    return 0;
}
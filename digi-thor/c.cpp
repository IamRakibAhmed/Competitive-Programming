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

    int n, x, y;
    cin >> n >> x >> y;

    int a[n + 10];
    for (int i = 0; i < n; i++) cin >> a[i];

    if (y == 1)
    {
        for (int i = 0; i < x; i++)
        {
            int l = a[n - 1];
            for (int j = n - 1; j >= 0; j--)
            {
                a[j] = a[j - 1];
            }
            a[0] = l;
        }

        for (int i = 0; i < n ; i++)
        {
            cout << a[i];
            if (i != n - 1) cout << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = 0; i < x; i++)
        {
            int f = a[0];
            for (int j = 0; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[n - 1] = f;
        }
    
        for (int i = 0; i < n ; i++)
        {
            cout << a[i];
            if (i != n - 1) cout << " ";
        }
        cout << endl;
    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int n;
 
int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    int c = 1;

    while (t--)
    {
        cin >> n;

        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        }

        int sum = 0, mSum = 0;
        int x, y;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            x = i;
            y = 0;

            while (x < n && y < n) sum +=  a[x++][y++];
            if (sum > mSum) mSum = sum;
        }

        for (int i = 0; i < n; i++)
        {
            sum = 0;
            x = 0;
            y = i;

            while (x < n && y < n) sum += a[x++][y++];
            if (sum > mSum) mSum = sum;
        }

        cout << "Case #" << c << ": " << mSum << endl;
        c++;
    }

    return 0;
}
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

    int n;
    cin >> n;

    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int c = 0, police = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == -1)
        {
            c++;
            if (police > 0)
            {
                c--;
                police--;
            }
        }
        else 
            police += a[i];
    }

    cout << c << endl;

    return 0;
}
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
    
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<vector<char>> a(n);
        for(int i = 0; i < n; i++)
        {
            vector<char> b(m);
            for(int j = 0; j < m; j++)
                cin >> b[j];

            a[i] = b;
        }

        int res = 0;

        for(int i = 0; i < a[0].size() - 1; i++)
            res += (a[a.size() - 1][i] != 'R');
        for(int i = 0; i < a.size() - 1; i++)
            res += (a[i][a[0].size() - 1] != 'D');

        cout << res << endl;
    }
    
    return 0;
}
/*
* author: Rakib Ahmed
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int mx = 2e5 + 123;
int a[mx];
int b[mx];
int p[mx];

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    priority_queue<int, vector<int>, greater<int>> q[5][5];

    for (int i = 1; i <= n; i++)
        q[a[i]][b[i]].push(p[i]);

    int m;
    cin >> m;
    
    while (m--)
    {
        int c;
        cin >> c;

        int res = INT_MAX;
        int x, y;

        for (int i = 1; i <= 3; i++)
        {
            if (!q[c][i].empty() && q[c][i].top() < res)
            {
                res = q[c][i].top();
                x = c, y = i;
            }
        }

        for (int i = 1; i <= 3; i++)
        {
            if (!q[i][c].empty() && q[i][c].top() < res)
            {
                res = q[i][c].top();
                x = i, y = c;
            }
        }

        if (res == INT_MAX)
            res = -1;
        else 
            q[x][y].pop();

        cout << res << " ";
    }

    cout << endl;
    
    return 0;
}
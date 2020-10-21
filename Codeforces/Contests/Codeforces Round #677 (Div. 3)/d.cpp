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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            s.insert(x);
            a.push_back(x);
        }

        if (s.size() == 1)
            cout << "NO" << endl;
        else
        {
            int x = a[0];
            int y = -1;
            vector<int> root;
            vector<pair<int, int>> res;
            for (int i = 1; i <= n - 1; i++)
            {
                if (a[i] != x)
                {
                    if (y == -1) y = i + 1;
                    res.push_back(make_pair(1, i + 1));
                }
                else root.push_back(i + 1);
            }
            for (int z : root)
                res.push_back(make_pair(y, z));

            cout << "YES" << endl;
            for (pair<int, int> it : res)
                cout << it.first << " " << it.second << endl;
        }
    }

    return 0;
}
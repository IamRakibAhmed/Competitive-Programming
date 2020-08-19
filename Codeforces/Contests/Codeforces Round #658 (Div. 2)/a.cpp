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

        vector<int> a(n, 0), b(m, 0), c;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        //int size = max(n, m);

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] == a[j])
                    c.push_back(b[i]);
            }
        }

        if (c.size() != 0)
        {
            cout << "YES" << endl;
            cout << "1" << " ";
            if (c.size() > 1)
                cout << c[1] << endl;
            else 
                cout << c[0] << endl;
        }
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}
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
        int n;
        cin >> n;

        vector<int> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> e, o;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0 && i % 2 != 0)
                o.push_back(a[i]);
            else if (a[i] % 2 != 0 && i % 2 == 0)
                e.push_back(a[i]);
        }

        if (o.size() != e.size()) cout << -1 << endl;
        else cout << o.size() << endl;
    }

    return 0;
}
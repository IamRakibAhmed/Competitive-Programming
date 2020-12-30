#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define SIZE 200005

int var[SIZE];
pair<ll, int> pr[SIZE];

bool comp(pair<ll, int> a, pair<ll, int> b)
{
    return a.first > b.first;
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
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        {
            cin >> pr[i].first;
            pr[i].second = i;
        }
        for (int i = 1; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            var[a]++;
            var[b]++;
        }
        ll res = 0;
        for (int i = 1; i <= n; i++)
        {
            res += pr[i].first;
            var[i]--;
        }
        cout << res << " ";
        sort(pr + 1, pr + n + 1, comp);
        int c = 1;
        for (int i = 2; i < n; i++)
        {
            while (var[pr[c].second] == 0) c++;

            var[pr[c].second]--;
            res += pr[c].first;
            cout << res << " ";
        }
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            pr[i] = make_pair(0, 0);
            var[i] = 0;
        }
    }

    return 0;
}
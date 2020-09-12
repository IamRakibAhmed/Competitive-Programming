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
        map<int, int> mp;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        int r = 0;
        while (mp.find(r) != mp.end())
            r++;

        int l = 0;
        while (mp.find(l) != mp.end() && mp.find(l)->second >= 2)
            l++;

        cout << l + r << endl;
    }

    return 0;
}
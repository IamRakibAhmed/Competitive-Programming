#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        vector<int> ans;
        for (int i = 1; i <= a; i++)
        {
            if (i == b) continue;
            if (i > b || 2 * i >= b)
                ans.push_back(i);
        }

        cout << ans.size() << endl;
        for (auto i : ans) cout << i << " ";
        cout << endl;
    }

    return 0;
}
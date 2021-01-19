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
        int n, k;
        cin >> n >> k;

        vector<int> a(n + 1);
        for (int i = 1; i <= k; i++) a[i] = i;
        for (int i = k + 1; i <= n; i++) a[i] = 2 * k - i;

        int val = n - k;
        vector<int> res(k + 1);
        for (int i = 1; i <= k; i++) res[i] = i;
        reverse(res.begin() + k - val, res.end());
        for (int i = 1; i <= k; i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
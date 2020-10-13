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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum != 0)
        {
            cout << "YES" << endl;

            if (sum < 0)
                sort(a.begin(), a.end());
            else
                sort(a.begin(), a.end(), greater<int>());

            for (auto i : a) cout << i << " ";
            cout << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}
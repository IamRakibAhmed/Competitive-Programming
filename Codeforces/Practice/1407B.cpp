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

        vector<ll> a(n, 0), b;
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        ll res = 0;

        for (int i =  n - 1; i >= 0; i--)
        {
            ll new_hcf = 0;
            int index = 0;

            for (int j = 0; j <= i; j++)
            {
                int hcf = __gcd(res, a[j]);

                if (hcf > new_hcf)
                {
                    new_hcf = hcf;
                    index = j;
                }
            }

            swap(a[i], a[index]);
            res = __gcd(res, a[i]);
            cout << a[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
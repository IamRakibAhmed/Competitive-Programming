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
        ll n;
        cin >> n;

        ll res = 0, flag = 1;
        while (n)
        {
            ll rem = 1;
            if (n % 4 == 2 || (n <= 10) && n % 2 == 0)
                rem = (n / 2);
            if (flag == 1) res += rem;

            if (flag == 1) flag = 0;
            else flag = 1;
            n -= rem;
        }

        cout << res << endl;
    }

    return 0;
}
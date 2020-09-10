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

    int a, b, n;
    cin >> a >> b >> n;

    int j = 1;
    bool flag = false;

    while (n >= 0)
    {
        if (j % 2 != 0)
        {
            int hcf = __gcd(a, n);

            if (hcf <= n)
            {
                flag = true;
                n -= hcf;
            }
            else break;
        }
        else
        {
            int hcf = __gcd(b, n);

            if (hcf <= n)
            {
                flag = false;
                n -= hcf;
            }
            else break;
        }

        j++;
    }

    if (!flag)
        cout << 1 << endl;
    else 
        cout << 0 << endl;

    return 0;
}
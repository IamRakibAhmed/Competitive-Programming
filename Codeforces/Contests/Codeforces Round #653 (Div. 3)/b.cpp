#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll n, i, c = 0;
        cin >> n;

        while (n != 1)
        {
            c++;
            
            if (n % 3 != 0)
            {
                c = -1;
                break;
            }
            if (n % 6 == 0)
                n /= 6;
            else
                n *= 2;
        }

        cout << c << endl;
    }
    
    return 0;
}
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
        ll n, k;
        cin >> n >> k;

        if (k == 0)
        {
            if (n & 1)
                cout << "1" << endl;
            else 
                cout << "0" << endl;
        }
        else
        {
            if (n < k)
                cout << k - n << endl;
            else
            {
                if (abs(k - n) & 1)
                    cout << "1" << endl;
                else 
                    cout << "0" << endl;
            }
            
        }
        
    }

    return 0;
}
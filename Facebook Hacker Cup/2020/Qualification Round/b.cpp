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
    
    int t, i = 1;
    cin >> t;

    while (t--)
    {
        ll n, ac = 0, bc = 0;
        cin >> n;

        string str;
        cin >> str;

        for (ll i = 0; i < str.size(); i++)
        {
            if (str[i] == 'A') ac++;
            else bc++;
        }

        if (ac == 0 || bc == 0)
            cout << "Case #" << i << ": " << "N" << endl;
        else
        {
            ll mx = max(ac, bc);
            ll mn = min(ac, bc);

            if (mx - mn == 1)
                cout << "Case #" << i << ": " << "Y" << endl;
            else 
                cout << "Case #" << i << ": " << "N" << endl;
        }

        i++;
    }
    
    return 0;
}
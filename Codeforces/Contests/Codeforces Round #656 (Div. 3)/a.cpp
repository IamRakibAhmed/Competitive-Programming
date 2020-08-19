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
        vector<ll> a(3, 0);

        for (int i = 0; i < 3; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        if (a[1] == a[2])
        {
            cout << "YES" << endl;

            if (a[1] == a[2] && a[0] != a[1])
                a[1] = 1;

            cout << a[0] << " " << a[1] << " " << a[2] << endl;          
        }
        else 
            cout << "NO" << endl;
    }
    
    return 0;
}
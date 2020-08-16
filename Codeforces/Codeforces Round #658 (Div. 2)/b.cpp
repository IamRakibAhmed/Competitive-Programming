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
        int n, c = 0;
        cin >> n;

        vector<ll> a(n, 0);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1) c++;
            else break;
        }

        if (c == n)
        {
            if (c % 2 == 0)
                cout << "Second" << endl;
            else 
                cout << "First" << endl;
        }
        else 
        {
            if (c % 2 == 0)
                cout << "First" << endl;
            else 
                cout << "Second" << endl;
        }
    }
    
    return 0;
}
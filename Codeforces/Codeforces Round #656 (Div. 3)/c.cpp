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

        vector<ll> v(n, 0);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int key = n - 1;

        while (key && v[key - 1] >= v[key])
            key--;
        while (key && v[key - 1] <= v[key])
            key--;

        cout << key << endl;
    }
    
    return 0;
}
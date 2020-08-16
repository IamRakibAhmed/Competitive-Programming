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
    
    ll n;
    cin >> n;
    ll size = n, sum = 0;
    vector<ll> a(n, 0);
 
    for (ll i = 0; i < n; i++)
        cin >> a[i];
 
    if (a.size() == 1 || a.size() == 2)
        cout << a[0];
    else
    {
        for (ll j = n - 1, i = 0; j >= 0, i < n - 1; j--, i++)
        {
            if (n == 1) break;
            if (a.size() == 1 || a.size() == 2)
                cout << a.front();

            a[j] = a[i] + a[j - 1];
            a.erase(a.begin() + i);
            a.erase(a.begin() + (j - 1));
                
            if (sum < a[j])
                sum = a[j];
 
            n -= 2;
        }
 
        cout << sum << endl;
    }
    
    return 0;
}
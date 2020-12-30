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

    set<ll> s;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }

    ll q;
    cin >> q;
    
    for (int i = 1; i <= q; i++)
    {
        ll num;
        cin >> num;

        if (num > s.size() || (s.size() - num) + 1 == s.size())
            cout << "-1" << endl;
        else cout << (s.size() - num) + 1 << endl;
    }

    return 0;
}
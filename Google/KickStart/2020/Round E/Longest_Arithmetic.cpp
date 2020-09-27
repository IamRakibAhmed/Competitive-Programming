#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for(ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    ll check = a[1]-a[0];
    ll res = 1, ans = 0;

    for(ll i = 2; i < n; i++)
    {
        if((a[i]- a[i-1]) == check)
            res++;
        else
        {
            check = a[i]- a[i-1];
            ans = max(ans, res);
            res = 1;
        }          

    }

    ans = max(ans, res);
    return ans + 1;
}

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
        cout<<"Case #" << i << ": " << solve() << endl;
        i++;
    }

    return 0;
}
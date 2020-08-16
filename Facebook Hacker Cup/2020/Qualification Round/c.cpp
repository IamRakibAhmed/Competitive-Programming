/*
* author: Rakib Ahmed
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll timber()
{
    ll n, mx = 0;
    cin >> n;

    vector<ll> p(n, 0), h(n, 0);

    for (ll i = 0; i < n; i++)
        cin >> p[i] >> h[i];

    vector<ll> a(n, 0);
    for (ll i = 0; i < n; i++)
        a[i] = i;

    sort(a.begin(), a.end(), [p](ll m, ll n) {return p[m] < p[n];});

    unordered_map<ll, ll> left;
    unordered_map<ll, ll> right;

    for (ll i = n - 1; i >= 0; i--)       //for right to left cutting
    {
        ll j = a[i], point = p[j] - h[j];
        auto it = right.find(p[j]);

        right[point] = max(h[j] + (it == right.end() ? 0 : it->second), right[point]);
        mx = max(mx, right[point]);
    }

    for (ll i = 0; i < n; i++)           //for left to right cutting
    {
        ll j = a[i], point = p[j] + h[j];
        auto it = left.find(p[j]);

        left[point] = max(h[j] + (it == left.end() ? 0 : it->second), left[point]);
        it = right.find(point);

        mx = max(mx, (it == left.end() ? 0 : it->second) + left[point]);
    }
    return mx;
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
        cout << "Case #" << i << ": " << timber() << endl;
        i++;
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

//const ll size = 1e5;
vector<ll> a(1<<20 + 5), b(1<<20 + 5);
ll n, m;
set<ll> s;

void func()
{
    while (true)
    {
        set<ll> t = s;
        for (ll p : t)
        {
            for (ll i = 0; i < m; i++)
            {
                ll v = p & b[i];
                t.insert(p & b[i]);
            }
        }
        for (ll p : t)
        {
            for (ll i = 0; i < n; i++)
                t.insert(p | a[i]);
        }
        if (t.size() == s.size()) break;
        s = t;
    }
}

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
        cin >> n >> m;
        for (ll i = 0; i < n + 4; i++) a[i] = 0;
        for (ll i = 0; i < m + 4; i++) b[i] = 0;
        s.clear();

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        for (ll i = 0; i < m; i++) cin >> b[i];
        s.insert(0);
        func();
        cout << s.size() << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mod 1000000007

struct hashSet
{
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2> &p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return p.first % mod + p.second;
    }
};

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        ll m;
        cin >> m;
        ll neg = 0, pos = 0;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x < 0) neg++;
            else pos++;
        }

        ll res = neg * pos;
        cout << res << endl;
        return;
    }

    vector<ll> pos[n + 100], neg[n + 100];
    vector<ll> pos_size(n + 1), neg_size(n + 1);
    map<ll, ll> mp, pnt;
    vector<ll> polls;
    map<ll, ll> mpl;

    for (ll i = 1; i <= n; i++)
    {
        ll m;
        cin >> m;
        while (m--)
        {
            ll x;
            cin >> x;
            if (x < 0)
            {
                neg[i].push_back(-x);
                neg_size[i]++;
                mp[-x]++;
                if (!pnt.count(-x))
                {
                    polls.push_back(-x);
                    pnt[-x] = 1;
                }
                mpl[-x] = -i;
            }
            else
            {
                pos[i].push_back(x);
                pos_size[i]++;
                mp[x]++;
                if (!pnt.count(x))
                {
                    polls.push_back(x);
                    pnt[x] = 1;
                }
                mpl[x] = i;
            }
        }
    }

    for (ll i = 1; i <= n; i++)
    {
        reverse(neg[i].begin(), neg[i].end());
    }

    unordered_map<pair<ll, ll>, ll, hashSet> getPos, getNeg;

    for (ll l = 1; l <= n; l++)
    {
        vector<ll> p = pos[l];
        vector<ll> n = neg[l];

        ll i = 0, j = 0;
        ll ps = p.size(), ng = n.size();
        while (i < ps && j < ng)
        {
            getPos[{l, p[i]}] = 0;
            if (n[j] > p[i])
            {
                getPos[{l, p[i]}] = ng - j;
                i++;
            }
            else if (n[j] == p[i])
            {
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }

        i = 0, j = 0;
        while (i < ps && j < ng)
        {
            getNeg[{-l, n[j]}] = 0;
            if (n[j] < p[i])
            {
                getNeg[{-l, n[j]}] = ps - i;
                j++;
            }
            else if (n[j] == p[i])
            {
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
    }

    map<ll, ll> nextN;

    for (ll i = 1; i <= n; i++)
    {
        vector<ll> v = pos[i];
        ll sz = pos[i].size();
        sz--;
        for (ll j : v)
        {
            if (sz < 0) break;
            nextN[j] += (sz--);
        }

        vector<ll> t = neg[i];
        sz = neg[i].size();
        sz--;
        for (ll j : t)
        {
            if (sz < 0) break;
            nextN[j] += (sz--);
        }
    }

    ll res = 0;

    for (ll p : polls)
    {
        if (mp[p] > 1)
        {
            res++;
            ll oneL = nextN[p];
            res += oneL;
        }
        else
        {
            ll line = mpl[p];
            ll v;
            if (line < 0)
            {
                ll modL = -line;
                ll val = 0;
                val = getNeg[{line, p}];
                if (val >= 1)
                {
                    res++;
                    res += val - 1;
                }
            }
            else
            {
                ll val = 0;
                val = getPos[{line, p}];
                if (val >= 1)
                {
                    res++;
                    res += val - 1;
                }
            }
        }
    }

    cout << res << endl;
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

    while (t--) solve();

    return 0;
}
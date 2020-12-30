#include <bits/stdc++.h>
#define FAST_IO              \
    ios::sync_with_stdio(0); \
    cin.tie(NULL)
using namespace std;

typedef long long ll;
typedef long double Double;
typedef pair<ll, ll> Pair;

const int N = 1e6;
const ll INF = 1e18;
const Double EPS = 1e-9;

int main(void)
{
    FAST_IO;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll n;
    cin >> n;
    string in[n];
    for (int i = 0; i < n; i++)
        cin >> in[i];
    sort(in, in + n);
    vector<pair<string, ll>> v;
    ll c = 1LL;
    for (int i = 1; i < n; i++)
    {
        if (in[i] == in[i - 1])
        {
            c++;
        }
        else
        {
            v.push_back({in[i - 1], c});
            c = 1LL;
        }
    }
    v.push_back({in[n - 1], c});
    map<string, ll> dp;
    ll res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        string &cur = v[i].first;
        ll cnt = v[i].second;
        for (int j = 0; j < 14; j++)
        {
            if (cur[j] == '-')
                continue;
            char temp = cur[j];
            cur[j] = '*';
            if (dp.count(cur))
                res += (cnt * dp[cur]);
            dp[cur] += cnt;
            cur[j] = temp;
        }
    }
    cout << res << '\n';
    return 0;
}
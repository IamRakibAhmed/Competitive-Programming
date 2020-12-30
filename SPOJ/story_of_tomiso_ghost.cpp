#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MOD 10000019

const ll N = 1e6;
bool a[N + 7];
vector<ll> prime;

void sieve()
{
    for (int i = 1; i <= N; i++) a[i] = false;
    for (int i = 2; i * i <= N; i++)
    {
        if (a[i]) continue;
        for (int j = i * i; j <= N; j += i)
            a[j] = true;
    }

    for (int i = 2; i <= N; i++)
        if (!a[i]) prime.push_back(i);
}

ll bigmod(ll n, ll pow)
{
    if(pow == 0) return 1;
    return ((n % MOD) * (bigmod(n, pow - 1) % MOD)) % MOD;
}

ll factors(ll n, ll t)
{
    ll res = 1;
    for (int i = 0; i < prime.size() && prime[i] <= n; i++)
    {
        ll num = n, sum = 0;
        while (num / prime[i])
        {
            sum += (num / prime[i]);
            num /= prime[i];
        }

        if (sum >= t)
        {
            sum /= t;
            res *= bigmod(prime[i], sum);
            res %= MOD;
        }
    }

    return res;
}

int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    sieve();

    int t, i = 1;
    cin >> t;

    while (t--)
    {
        ll n, t;
        cin >> n >> t;

        ll res = factors(n, t);
        cout << "Case " << i << ": ";
        if (res == 1) cout << "-1" << endl;
        else cout << res << endl;

        i++;
    }

    return 0;
}
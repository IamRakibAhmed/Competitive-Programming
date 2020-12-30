#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll N = 1e6;
bool a[N + 7];
vector<ll> prime;

void sieve()
{
    prime.clear();
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

vector<ll> factors(ll n)
{
    vector<ll> v;
    for (int i = 0; i < prime.size(); i++)
    {
        if ((ll)prime[i] * prime[i] > n) break;
        int c = 0;
        while (n % prime[i] == 0)
        {
            c++;
            n /= prime[i];
        }

        if (c > 0) v.push_back(c);
    }

    if (n > 1) v.push_back(1);
    return v;
}
 
int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    sieve();
    int t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;
        vector<ll> res = factors(x);
        ll ans = *max_element(res.begin(), res.end());
        cout << ans << endl;
    }

    return 0;
}
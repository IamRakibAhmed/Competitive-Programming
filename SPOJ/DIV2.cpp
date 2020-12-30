#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

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

vector<ll> DivCnt()
{
    vector<ll> num;
    for (int i = 2; i <= N; i++)
    {
        ll n = i;
        ll c = 0;
        bool flag = 0;

        for (int j = 0; prime[j] * prime[j] <= n; j++)
        {

            if (n % prime[j] == 0)
            {
                n /= prime[j];
                c++;

                if (n % prime[j] == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0 && n != 1) c++;
        if (c > 1 && flag == 0) num.push_back(i);
    }

    return num;
}

int main()
{
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    sieve();
    vector<ll> res = DivCnt();

    sort(res.begin(), res.end());
    for (int i = 107; i < res.size(); i += 108)
        cout << res[i] << endl;

    return 0;
}
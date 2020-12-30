#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll N = 1e8 + 100;
bool a[N + 7];
ll arr[N + 7];
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

    ll index = 0;
    arr[0] = 0;
    for (int i = 1; i < N; i++)
    {
        if (prime[index] == i) index++;
        arr[i] = index;
    }
}
 
int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    sieve();
    while (1)
    {
        ll x;
        cin >> x;

        if (x == 0) break;
        double res = ((abs((double)arr[x] - ((double)x / log(x * 1.0)))) / (double)arr[x]) * 100.0;
        cout << fixed << setprecision(1) << res << endl;
    }

    return 0;
}
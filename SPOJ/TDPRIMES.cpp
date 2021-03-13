#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll mx = (int)1e8;
bool a[mx + 7];
vector<ll> prime;

void sieve()
{
    prime.clear();
    for (int i = 0; i <= mx; i++) a[i] = false;
    for (int i = 2; i * i < mx; i++)
    {
        if (a[i]) continue;
        for (int j = i * i; j < mx; j += i)
            a[j] = true;
    }

    for (int i = 2; i < mx; i++)
    {
        if (!a[i]) prime.push_back(i);
    }
}

int main()
{
    sieve();

    for (int i = 0; i < prime.size(); i += 100)
        cout << prime[i] << endl;

    return 0;
}

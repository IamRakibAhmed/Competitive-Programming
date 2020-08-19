#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll n, c[10];
    cin >> n;

    for (int i = 0; i < 10; i++)
        c[i] = 1;

    ll mult = 1, in = 0;

    while (mult < n)
    {
        c[in]++;
        in = (in + 1) % 10;

        mult = 1;
        for (int i = 0; i < 10; i++)
            mult *= c[i];
    }

    string str = "codeforces";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < c[i]; j++)
            cout << str[i];
    }
    
    return 0;
}
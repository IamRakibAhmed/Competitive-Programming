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
    
    ll n;
    cin >> n;
    ll m;
    cin >> m;

    if (n >= 27)
        cout << m << endl;
    else 
    {
        ll res = 1;
        while (n != 0)
        {
            res *= 2;
            n--;
        }

        cout << m % res << endl;
    }
    
    return 0;
}
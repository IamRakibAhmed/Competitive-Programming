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

    if (n % 2 == 0)
        cout << n / 2 << endl;
    else 
        cout << ((n / 2) + 1) * -1 << endl;
    
    return 0;
}
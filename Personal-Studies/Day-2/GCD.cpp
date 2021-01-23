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

    int a, b;
    cin >> a >> b;

    int mn = min(a, b);
    int gcd;
    for (int i = 1; i <= mn; i++)
    {
        if (a % i == 0 && b % i == 0) gcd = i;
    }

    cout << gcd << endl;

    return 0;
}
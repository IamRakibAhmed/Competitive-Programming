#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int euclid_gcd(int a, int b)
{
    if (b == 0) return a;
    else return euclid_gcd(b, a % b);
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b;
    cin >> a >> b;
    int gcd = euclid_gcd(a, b);
    cout << gcd << endl;

    return 0;
}
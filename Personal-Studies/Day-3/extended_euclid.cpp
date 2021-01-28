#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int extended_euclid(int a, int b, int *x, int *y)
{
    if (b == 0)
    {
        *x = 1;
        *y = 0;

        return a;
    }

    int x1, y1;
    int gcd = extended_euclid(b, a % b, &x1, &y1);
    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
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

    int x, y;
    int res = extended_euclid(a, b, &x, &y);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int extended_gcd(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;

        return a;
    }

    int x1, y1;
    int gcd = extended_gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;

    return gcd;
}

void find_any_solution(int a, int b, int c, int x0, int y0, int g)
{
    g = extended_gcd(abs(a), abs(b), x0, y0);

    if (c % g != 0) cout << "No Solution" << endl;
    else
    {
        if (a < 0) x0 = -x0;
        if (b < 0) y0 = -y0;
        cout << x0 * (c / g) << " " << y0 * (c / g) << endl;
    }
}
 
int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b, c;
    cin >> a >> b >> c;
    int x, y, g;
    find_any_solution(a, b, c, x, y, g);

    return 0;
}
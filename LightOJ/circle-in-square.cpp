#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--)
    {
        double r;
        cin >> r;

        double a = (r * 2) * (r * 2);
        double b = 2 * acos(0.0) * (r * r);
        cout << fixed << setprecision(2) << a - b << endl;
    }

    return 0;
}
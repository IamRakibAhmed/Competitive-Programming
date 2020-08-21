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

    int n;
    cin >> n;
    int mx;
    cin >> mx;
    int mn = mx, c = 0;

    for (int i = 1; i < n; i++)
    {
        int num;
        cin >> num;

        if (num > mx)
        {
            mx = num;
            c++;
        }
        else if (num < mn)
        {
            mn = num;
            c++;
        }
    }

    cout << c << endl;

    return 0;
}
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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1 || n == 2 || n == 4)
            cout << "-1" << endl;
        else
        {
            if (n % 3 == 0)
                cout << n / 3 << " " << 0 << " " << 0 << endl;
            else if (n % 3 == 1)
                cout << (n - 7) / 3 << " " << 0 << " " << 1 << endl;
            else 
                cout << (n - 5) / 3 << " " << 1 << " " << 0 << endl;
        }
    }

    return 0;
}
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
        ll n;
        cin >> n;

        if (n <= 30)
            cout << "NO" << endl;
        else
        {
            if (n == 36)
            {
                cout << "YES" << endl;
                cout << "6 15 14 1" << endl;
            }
            else if (n == 44)
            {
                cout << "YES" << endl;
                cout << "6 15 10 13" << endl;
            }
            else if (n == 40)
            {
                cout << "YES" << endl;
                cout << "6 15 14 5" << endl;
            }
            else
            {
                cout << "YES" << endl;
                cout << "6 10 14 " << n - 30 << endl;
            }
        }
    }
    return 0;
}
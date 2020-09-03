/*
*   author: Rakib Ahmed
*/

#include <bits/stdc++.h>
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

    int a = 2;
    int res = n / 2;
    
    cout << res << endl;

    if (n % 2 == 0)
    {
        for (int i = 1; i <= res; i++)
            cout << 2 << ' ';
    }
    else
    {
        for (int i = 1; i < res; i++)
            cout << 2 << ' ';

        cout << 3 << endl;
    }

    return 0;
}
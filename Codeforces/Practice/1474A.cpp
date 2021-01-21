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

        string a, b = "1";
        cin >> a;

        for (int i = 1; i < n; i++)
        {
            if ('1' + a[i] != a[i - 1] + b[i - 1]) b += '1';
            else b += '0';
        }

        cout << b << endl;
    }

    return 0;
}
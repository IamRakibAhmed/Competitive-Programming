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

        int val = n * 4;
        cout << val << " ";
        for (int i = 1; i <= n - 1; i++)
        {
            val -= 2;
            cout << val << " ";
        }

        cout << endl;
    }

    return 0;
}
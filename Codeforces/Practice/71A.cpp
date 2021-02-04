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
        string str;
        cin >> str;

        if (str.size() > 10)
            cout << str[0] << str.size() - 2 << str[str.size() - 1] << endl;
        else
            cout << str << endl;
    }

    return 0;
}
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

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string str;
    cin >> str;

    int res = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '1')
            res += a;
        else if (str[i] == '2')
            res += b;
        else if (str[i] == '3')
            res += c;
        else res += d;
    }

    cout << res << endl;

    return 0;
}
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

    string str;
    cin >> str;

    int res = 0;
    char ch = 'a';

    for (int i = 0; i < str.size(); i++)
    {
        int diff = abs((int)(ch - str[i]));
        res += min(diff, 26 - diff);
        ch = str[i];
    }

    cout << res << endl;

    return 0;
}
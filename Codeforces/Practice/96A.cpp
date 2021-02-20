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

    string str;
    cin >> str;

    int flag = 0, c = 1;

    for (int i = 0; i < str.size() - 1; i++)
    {
        if (c >= 7) break;
        else if (str[i] == str[i + 1]) c++;
        else c = 1;
    }

    if (c >= 7) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
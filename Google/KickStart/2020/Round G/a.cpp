#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int solve(string s)
{
    int a = 0, b = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'K' && s[i + 1] == 'I' && s[i + 2] == 'C' && s[i + 3] == 'K')
        {
            a++;
            continue;
        }
        if (s[i] == 'S' && s[i + 1] == 'T' && s[i + 2] == 'A' && s[i + 3] == 'R' && s[i + 4] == 'T')
            b += a;
    }

    return b;
}
 
int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    int i = 1;

    while (t--) 
    {
        string str;
        cin >> str;

        int res = solve(str);
        cout << "Case #" << i << ": " << res << endl;
        i++;
    }

    return 0;
}
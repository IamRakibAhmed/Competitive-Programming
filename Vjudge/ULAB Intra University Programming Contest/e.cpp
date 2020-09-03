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
    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == s[i - 1])
        {
            cnt++;

            if (s[i - 1] != 'R' && s[i + 1] != 'R')
                s[i] = 'R';
            else if (s[i - 1] != 'B' && s[i + 1] != 'B')
                s[i] = 'B';
            else if (s[i - 1] != 'G' && s[i + 1] != 'G')
                s[i] = 'G';
        }
    }
    if (s[n - 1] == s[n - 2])
    {
        cnt++;
        if (s[n - 1] != 'B')
            s[n - 1] = 'B';
        else if (s[n - 1] != 'R')
            s[n - 1] = 'R';
        else if (s[n - 1] != 'G')
            s[n - 1] = 'G';
    }

    cout << cnt << endl;
    cout << s << endl;

    return 0;
}
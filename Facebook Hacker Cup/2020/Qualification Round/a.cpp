/*
* Author: Rakib Ahmed
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

char solve(string& str, string& str1, int i, int j)
{
    if (i == j) return 'Y';
    else if (i < j)
    {
        if (str[i + 1] == 'N' || str1[i] == 'N')
            return 'N';

        return solve(str, str1, i + 1, j);
    }
    else
    {
        if (str[i - 1] == 'N' || str1[i] == 'N')
            return 'N';

        return solve(str, str1, i - 1, j);
    }
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t, i = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string str, str1;
        cin >> str >> str1;

        cout << "Case #" << i << ":" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << solve(str, str1, i, j);

            cout << endl;
        }

        i++;
    }
    
    return 0;
}
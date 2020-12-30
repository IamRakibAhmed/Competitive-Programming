#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> indx[27];

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
        string str;
        cin >> str;
        int n = str.size();
        for (int i = 0; i < 26; i++) indx[i].clear();
        for (int i = 0; i < n; i++)
        {
            indx[(int)str[i] - 'a'].push_back(i);
        }
        int l, str_n, res = 0;
        for (int i = 0; i < 26; i++)
        {
            if (indx[i].size() < 2) continue;
            l = indx[i][0];
            str_n = indx[i].size();
            for (int j = 1; j < str_n; j++)
            {
                if (indx[i][j] - l > 2) l = indx[i][j];
                else res++;
            }
        }
        cout << res << endl;
    }
    return 0;
}
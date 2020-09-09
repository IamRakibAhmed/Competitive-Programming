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

    int n;
    cin >> n;

    vector<string> str(n);
    for (int i = 0; i < n; i++)
        cin >> str[i];

    bool flag = false;
    for (int i = 0; i < str.size(); i++)
    {
        string s = str[i];
        if ((s[0] == 'O' && s[1] == 'O') || (s[3] == 'O' && s[4] == 'O'))
        {
            cout << "YES" << endl;
            if (s[0] == 'O' && s[1] == 'O')
            {
                s[0] = '+';
                s[1] = '+';
            }
            else
            {
                s[3] = '+';
                s[4] = '+';
            }
            str[i] = s;
            flag = true;
            break;
        }
    }

    if (!flag)
        cout << "NO" << endl;
    else
    {
        for (auto i : str)
            cout << i << endl;
    }
    
    return 0;
}
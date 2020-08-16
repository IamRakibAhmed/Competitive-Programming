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
    
    int t, j = 1;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int bCount = 0, dotCount = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'B') bCount++;
            else if (str[i] == '.') dotCount++;
        }

        if (bCount >= dotCount && dotCount > 0)
            cout << "Case #" << j << ": Y" << endl;
        else 
            cout << "Case #" << j << ": N" << endl;

        j++;
    }
    
    return 0;
}
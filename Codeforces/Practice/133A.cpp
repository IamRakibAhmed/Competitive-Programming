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

    int flag = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9')
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
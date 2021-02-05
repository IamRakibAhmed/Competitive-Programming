#include<bits/stdc++.h>
#include <string>
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

    int h = 0, e = 0, l = 0, o = 0, lc = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'h' && h == 0 && e == 0 && l == 0 && o == 0) h = 1;
        else if (str[i] == 'e' && h == 1 && e == 0 && l == 0 && o == 0) e = 1;
        else if (str[i] == 'l' && h == 1 && e == 1 && l == 0 && o == 0) l = 1;
        else if (str[i] == 'o' && h == 1 && e == 1 && l == 1 && o == 0 && lc > 1) o = 1;
        if (str[i] == 'l' && h == 1 && e == 1 && o == 0) lc++;
    }

    if (h == 1 && e == 1 && l == 1 && o == 1 && lc > 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
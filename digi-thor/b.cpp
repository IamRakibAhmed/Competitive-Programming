#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    fast_io;
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/

    int t;
    cin >> t;

    while (t--)
    {
        int y, c = 0;
        cin >> y;
        
        for (int i = 2020; i <= y; i += 4)
        {
            c++;
        }

        cout << c << endl;
    }

    return 0;
}
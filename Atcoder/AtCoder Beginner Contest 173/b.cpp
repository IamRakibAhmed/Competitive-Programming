#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<fstream>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t, a[4];
    cin >> t;
    memset(a, 0, sizeof(a));

    while (t--)
    {
        string s;
        cin >> s;

        if (s == "AC")
            a[0]++;
        else if (s == "WA")
            a[1]++;
        else if (s == "TLE")
            a[2]++;
        else
            a[3]++;
    }

    cout << "AC x " << a[0] << endl;
    cout << "WA x " << a[1] << endl;
    cout << "TLE x " << a[2] << endl;
    cout << "RE x " << a[3] << endl;
    
    return 0;
}
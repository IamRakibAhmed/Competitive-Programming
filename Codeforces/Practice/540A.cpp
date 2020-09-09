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

    string str, str1;
    cin >> str >> str1;

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int a = str[i];
        int b = str1[i];

        res += min(abs(a - b), 10 - abs(a - b));
    }

    cout << res << endl;

    return 0;
}
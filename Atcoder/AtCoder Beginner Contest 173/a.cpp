#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
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
    
    int n, res;
    cin >> n;
    int cop = n;

    if (n % 1000 != 0)
    {
        n /= 1000;
        res = ((n * 1000) + 1000) - cop;
    }
    else
        res = n % 1000;
    
    cout << res << endl;

    return 0;
}
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<bitset>
#include<cassert>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<fstream>
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

    vector<int> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    int c = 0, flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i]) c++;
        else c = 0;

        if (c == 3)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
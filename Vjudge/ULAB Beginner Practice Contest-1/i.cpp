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
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t, i = 1;
    cin >> t;

    while (t--)
    {
        double n;
        cin >> n;

        double r = (n * n);
        double circle_area = 2 * acos(0.0) * (r);
        double a = 2 * n;
        double sq_area = a * a;

        double res = sq_area - circle_area;

        cout << fixed << setprecision(2) << "Case " << i << ": " << res << endl;
        i++;
    }
    
    return 0;
}
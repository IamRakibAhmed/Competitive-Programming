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
    
    ll n;
    ld d;
    cin >> n >> d;

    vector<ld> v;
    for (int i = 1; i <= n; i++)
    {
        ld a, b;
        cin >> a >> b;
        ld res = sqrt((a * a) + (b * b));

        v.push_back(res);
    }

    int c = 0;
    for (auto i : v)
        if (i <= d) c++;

    cout << c << endl;
    
    return 0;
}
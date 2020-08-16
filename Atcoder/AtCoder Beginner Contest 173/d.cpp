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
    
    int n;
    cin >> n;

    vector<ll> a(n, 0);

    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<ll>());
    for (int i = 1; i < n; i++)
        sum += a[i / 2];

    cout << sum << endl;
    
    return 0;
}
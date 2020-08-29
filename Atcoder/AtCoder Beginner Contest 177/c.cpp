#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
#include <bitset>
#include <cassert>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <fstream>
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
    long long sum = 0;

    vector<long long> a(n, 0), b(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    b[0] = a[n - 1];
    b[0] %= 1000000007;

    for (int i = 1; i < n; i++)
    {
        b[i] = b[i - 1] + a[n - i - 1];
        b[i] %= 1000000007;
    }

    long long res = 0;

    for (int i = 0; i < n - 1; i++)
    {
        res += (b[n - i - 2] * a[i]);
        res %= 1000000007;
    }

    cout << res << endl;
    return 0;
}
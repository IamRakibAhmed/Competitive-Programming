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
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    string str;
    cin >> n >> str;

    int x = 0, y = 0, c = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'W')
            y++;
        else
            x++;
    }

    int res = min(x, y);

    for (int i = 0; i < x; i++)
    {
        if (str[i] == 'W')
            c++;
    }

    res = min(res, c);
    cout << res << endl;

    return 0;
}
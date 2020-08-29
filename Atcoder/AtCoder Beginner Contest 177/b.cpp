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

    string str, s;
    cin >> str >> s;

    int strl = str.size();
    int tl = s.size();
    int res = 1000;

    for (int i = 0; i < strl - tl + 1; i++)
    {
        int cnt = tl;
        for (int j = 0; j < tl; j++)
        {
            if (str[i + j] == s[j])
                cnt--;
        }

        res = min(res, cnt);
    }

    cout << res << endl;
    return 0;
}
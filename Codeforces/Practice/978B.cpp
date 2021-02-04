#include<bits/stdc++.h>
#include <functional>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a[100007];

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    string str;
    cin >> str;

    memset(a, 0, sizeof(a));
    int j = 0;
    vector<int> v;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'x') a[j]++;
        else j++;
    }
    
    sort(a, a + j + 1, greater<int>());
    int i = 0;
    while (a[i] > 2)
    {
        v.push_back(a[i]);
        i++;
    }
    int res = 0;
    for (auto i : v) res += (i - 2);

    cout << res << endl;
    return 0;
}
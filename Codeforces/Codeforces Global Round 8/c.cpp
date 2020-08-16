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

    vector<pair<int, int>> a;
    for (int i = 0; i <= n + 1; i++)
        a.emplace_back(i, i);

    for (int i = 0; i <= n; i++)
    {
        a.emplace_back(i, i + 1);
        a.emplace_back(i + 1, i);
    }

    cout << a.size() << endl;

    for (auto i : a)
        cout << i.first << " " << i.second << endl;
    
    return 0;
}
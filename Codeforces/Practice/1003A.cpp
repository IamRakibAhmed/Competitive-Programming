#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a[10001];

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin >> n;

    memset(a, 0, sizeof(int));
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;

        a[x]++;
    }

    if (n == 1)
        cout << "1" << endl;
    else
    {
        sort(a, a + 10001, greater<int>());
        cout << a[0] << endl;
    }
    return 0;
}
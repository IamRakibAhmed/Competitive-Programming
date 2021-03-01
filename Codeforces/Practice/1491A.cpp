#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    int oc = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1) oc++;
    }

    while (q--)
    {
        int k, x;
        cin >> k >> x;
        if (k == 1)
        {
            if (a[x - 1] == 1) oc--;
            else oc++;
            a[x - 1] = 1 - a[x - 1];
        }
        else
        {
            if (oc >= x) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }

    return 0;
}
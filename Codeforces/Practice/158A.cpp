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

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int score = a[k - 1], c;
    if (score == 0) c = 0;
    else c = 1;

    for (int i = 0; i < n; i++)
    {
        if (i + 1 != k)
            if (a[i] >= score && a[i] != 0) c++;
    }

    if (score == 0 && c == 0) cout << 0 << endl;
    else cout << c << endl;
    return 0;
}
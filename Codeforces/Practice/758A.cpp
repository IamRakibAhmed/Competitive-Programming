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

    vector<ll> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    if (a.size() == 1)
        cout << "0" << endl;
    else
    {
        sort(a.begin(), a.end(), greater<ll>());
        ll mx = a[0], sum = 0;

        for (int i = 1; i < n; i++)
            sum += (mx - a[i]);

        cout << sum << endl;
    }
    return 0;
}
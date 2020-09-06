#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void solve()
{
    ll n, k;
    cin >> n >> k;

    string str;
    cin >> str;

    for (int i = k; i < n; i++)
    {
        int j = i - k;
        if (str[j] == str[i])
            continue;
        else if (str[j] == '?')
            str[j] = str[i];
        else if (str[i] == '?')
            str[i] = str[j];
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    int z = 0, o = 0, q = 0;
    for (int i = 0; i < k; i++)
    {
        if (str[i] == '1')
            o++;
        else if (str[i] == '0')
            z++;
        else
            q++;
    }

    if(o + q < z || z + q < o)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = k; i < n; i++)
    {
        if (str[i] == '1')
            o++;
        else if (str[i] == '0')
            z++;
        else
            q++;

        if (str[i - k] == '1')
            o--;
        else if (str[i - k] == '0')
            z--;
        else
            q--;

        if(o + q < z || z + q < o)
        {
            cout << "NO" << endl;
            return;
        }          
    }
    cout << "YES" << endl;
    return;
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}
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

    vector <int> a(n);
    map <int, int> mp;
    int sqc = 0;
    int pair_count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;

        if (mp[a[i]] % 4 == 0)
        {
            sqc++;
            pair_count--;
        }
        else if (mp[a[i]] % 2 == 0)
            pair_count++;
    }

    int q;
    cin >> q;

    while (q--)
    {
        char x;
        cin >> x;
        int p;
        cin >> p;

        if (x == '+')
        {
            int temp = ++mp[p];
            if (temp % 4 == 0)
            {
                sqc++;
                pair_count--;
            }
            else if (temp % 2 == 0)
                pair_count++;
        }
        if (x == '-')
        {
            int temp = --mp[p];
            if ((temp + 1) % 4 == 0)
            {
                sqc--;
                pair_count++;
            }
            else if ((temp + 1) % 2 == 0)
                pair_count--;
        }

        bool res = false;
        if (sqc > 1)
            res = true;
        if (sqc > 0 && pair_count > 1)
            res = true;

        if (res)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
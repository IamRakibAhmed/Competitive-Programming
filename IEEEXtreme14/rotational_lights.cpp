#include <bits/stdc++.h>
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

    ll in, t;
    cin >> in >> t;

    ll ch;

    vector<char> light(t, '0');
    for (int i = 0; i < in; i++)
    {
        cin >> ch;
        light[ch] = '1';
    }

    map<string, ll> mem;
    string init_pattern(light.begin(), light.end());

    ll i;
    for (i = 1; i < t; i++)
    {
        ch = light[i - 1];
        light.push_back(ch);
        string curr_pattern(light.begin() + i, light.end());

        if (curr_pattern.compare(init_pattern) == 0)
        {
            cout << i - 1 << endl;
            return 0;
        }
    }

    cout << i - 1 << endl;

    return 0;
}
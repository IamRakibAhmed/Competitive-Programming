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

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n, 0);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        if (n == 1)
        {
            cout << "0" << endl;
            continue;
        }

        int k = 1;
        map<int, vector<int>> mp;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                auto it = mp.find(a[i] + a[j]);
                if (it == mp.end())
                {
                    vector<int> v;
                    v.push_back(i);
                    v.push_back(j);
                    mp.insert({a[i] + a[j], v});
                }
                else
                {
                    int flag = 0;
                    for (int itr : it->second)
                    {
                        if (itr == i || itr == j)
                        {
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 0)
                    {
                        it->second.push_back(i);
                        it->second.push_back(j);
                        int size = (int)it->second.size() / 2;
                        k = (k < size ? size : k);
                    }
                }
            }
        }

        cout << k << endl;
    }

    return 0;
}
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
        string str;
        cin >> str;

        vector<int> a;
        int c = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
                c++;
            else
            {
                if (c > 0)
                    a.push_back(c);

                c = 0;
            }
        }

        if (c)
            a.push_back(c);

        sort(a.begin(), a.end());
        c = 0;
        for (int i = a.size() - 1; i >= 0; i -= 2)
            c += a[i];

        cout << c << endl;
    }

    return 0;
}
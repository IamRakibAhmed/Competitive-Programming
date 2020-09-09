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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int zc = 0, oc = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1) oc++;
            else zc++;
        }

        if (zc >= oc)
        {
            cout << zc << endl;
            for (int i = 0; i < zc; i++)
                cout << "0 ";

            cout << endl;
        }
        else
        {
            if (oc % 2 != 0) oc--;
            cout << oc << endl;
            for (int i = 0; i < oc; i++)
                cout << "1 ";

            cout << endl;
        }
    }

    return 0;
}
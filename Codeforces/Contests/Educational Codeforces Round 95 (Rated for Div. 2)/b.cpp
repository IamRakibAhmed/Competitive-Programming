#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int a[10007], b[10007], res[10007];
 
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

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            if (b[i]) continue;
            temp.push_back(a[i]);
        }

        sort(temp.begin(), temp.end(), greater<int>());
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            if (b[i]) res[i] = a[i];
            else
            {
                res[i] = temp[c];
                c++;
            }

            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
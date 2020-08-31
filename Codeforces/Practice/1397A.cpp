#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll a[300];
 
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

        for (int i = 'a'; i <= 'z'; i++)
            a[i] = 0;

        string str;
        for (int i = 0; i < n; i++)
        {
            cin >> str;
            for (int j = 0; j < str.size(); j++)
                a[str[j]]++;
        }

        int flag = 0;
        for (int i = 'a'; i <= 'z'; i++)
        {
            if (a[i] % n != 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}
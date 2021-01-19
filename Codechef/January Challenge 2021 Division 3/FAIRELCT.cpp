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

    int t;
    cin >> t;
    
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n), b(m);
        int sum_A = 0, sum_B = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum_A += a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            sum_B += b[i];
        }

        if (sum_A > sum_B) cout << 0 << endl;
        else
        {
            sort(b.begin(), b.end(), greater<int>());
            sort(a.begin(), a.end());

            int c = 0, flag = 0;
            int mn = min(a.size(), b.size());

            for (int i = 0; i < mn; i++)
            {
                if (a[i] < b[i])
                {
                    swap(a[i], b[i]);
                    c++;
                }

                int sum_A = 0, sum_B = 0;
                for (int i = 0; i < n; i++)
                    sum_A += a[i];
                for (int i = 0; i < m; i++)
                    sum_B += b[i];

                if (sum_A > sum_B)
                {
                    flag = 1;
                    break;
                }
                else flag = 0;
            }

            if (flag == 1) cout << c << endl;
            else cout << -1 << endl;
        }
    }

    return 0;
}
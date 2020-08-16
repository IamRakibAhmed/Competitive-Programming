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
        int n, i = 1, c = 0;
        cin >> n;

        vector<int> a;
        while (c != n && i <= 1000)
        {
            if (i % 2 != 0)
            {
                a.push_back(i);
                c++;
            }
            i++;
        }

        if (a.size() != n)
        {
            int size = n - a.size();
            while (size--)
                a.push_back(999);
        }

        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";

        cout << endl;
    }
    
    return 0;
}
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
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n, 0), b;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) != x)
                b.push_back(a[i]);
        }

        reverse(b.begin(), b.end());
        b.push_back(a[x - 1]);
        for (int i = b.size() - 1; i >= x; i--)
        {
            int temp = b[i];
			b[i] = b[i - 1];
			b[i - 1] = temp;
        }
        for (int i = 0; i < b.size(); i++)
        {
            cout << b[i];
            if (i != b.size() - 1) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
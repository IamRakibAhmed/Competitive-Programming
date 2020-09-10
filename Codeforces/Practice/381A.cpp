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

    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int s1 = 0;
    int s2 = 0;

    int j = 1;

    while (a.size() != 0)
    {
        if (j % 2 != 0)
        {
            if (a[0] > a[a.size() - 1])
            {
                s1 += a[0];
                a.erase(a.begin() + 0);
            }
            else
            {
                s1 += a[a.size() - 1];
                a.erase(a.begin() + (a.size() - 1));
            }
        }
        else
        {
            if (a[0] > a[a.size() - 1])
            {
                s2 += a[0];
                a.erase(a.begin() + 0);
            }
            else
            {
                s2 += a[(a.size()) - 1];
                a.erase(a.begin() + (a.size() - 1));
            }
        }
        j++;
    }

    cout << s1 << " " << s2 << endl;

    return 0;
}
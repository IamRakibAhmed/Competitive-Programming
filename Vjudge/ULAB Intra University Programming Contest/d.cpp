/*
*   author: Rakib Ahmed
*/

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

    int n;
    cin >> n;

    vector<int> arr(n + 3, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    int c = 0;
    vector<int> a;
    a.push_back(arr[1]);

    for (int i = 2; i <= n; i++)
    {
        int hcf = __gcd(arr[i - 1], arr[i]);
        if (hcf > 1)
        {
            a.push_back(1);
            a.push_back(arr[i]);
            c++;
        }
        else
            a.push_back(arr[i]);
    }

    cout << c << endl;

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    cout << endl;

    return 0;
}
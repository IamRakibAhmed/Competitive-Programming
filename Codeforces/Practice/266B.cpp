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

    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;

    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                swap(str[i], str[i + 1]);
                i++;
            }
        }
    }

    cout << str << endl;

    return 0;
}
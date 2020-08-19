#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        int n, m = 0, sum = 0;
        string str;
        cin >> n;
        cin >> str;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == '(')
                sum += 1;
            else
                sum += -1;
            
            m = min(m, sum);
        }

        cout << -m << endl;
    }
    
    return 0;
}
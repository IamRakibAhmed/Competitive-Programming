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
        int n;
        cin >> n;
        string str, str1;
        cin >> str >> str1;

        vector<int> a;
        for (int i = 1; i < n; i++)
        {
            if (str[i] != str[i - 1])
            {
                a.push_back(i);
                
                if (str[0] == '0') str[0] = '1';
                else str[0] = '0';
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (str1[i] != str[0])
            {
                a.push_back(i + 1);

                if (str[0] == '0') str[0] = '1';
                else str[0] = '0';
            }
        }

        cout << a.size() << " ";
        for (auto i : a)
            cout << i << " ";

        cout << endl;
    }
    
    return 0;
}
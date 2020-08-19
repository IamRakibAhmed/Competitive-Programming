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

        int l = 0, r = n - 1;
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                if (str[r] != str1[n - i - 1])
                    a.push_back(1);

                a.push_back(n - i);
                r--;
            }
            else
            {
                if (str[l] == str1[n - i - 1])
                    a.push_back(1);
                
                a.push_back(n - i);
                l++;
            }
        }

        cout << a.size() << " ";
        for (auto i : a)
            cout << i << " ";

        cout << endl;
    }
    
    return 0;
}
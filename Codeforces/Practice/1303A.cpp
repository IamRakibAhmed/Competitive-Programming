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
            string str;
            cin >> str;
     
            int l = 0, r = 0, flag = 0, flag1 = 0;
            for (int i = 0; i < str.size(); i++)
            {
                if (str[i] == '1')
                {
                    l = i;
                    flag = 1;
                    break;
                }
            }
     
            for (int i = str.size() - 1; i > l; i--)
            {
                if (str[i] == '1')
                {
                    r = i;
                    flag1 = 1;
                    break;
                }
            }
     
            if (flag == 0 || flag1 == 0) cout << 0 << endl;
            else
            {
                int c = 0;
                while (l < r)
                {
                    if (str[l] == '0') c++;
                    l++;
                }
     
                cout << c << endl;
            }
        }
     
        return 0;
    }
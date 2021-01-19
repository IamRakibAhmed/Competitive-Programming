#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int gcd(int a, int b)
{
    if (a == 0) return b;
    return gcd(b % a, a);
}
 
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
        string str, str1;
        cin >> str;
        cin >> str1;

        if (str.size() < str1.size())
        {
            string temp = str1;
            str1 = str;
            str = temp;
        }

        int flag = 0;
        int sz = str1.size();
        for (int i = 0; i < str.size(); i += sz)
        {
            if (str.substr(i, sz) != str1)
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            int temp = 0;
            string res = "";
            for (int i = 1; i < str1.size(); i++)
            {
                temp = 0;
                string sub = str1.substr(0, i);
                for (int j = 0; j < str1.size(); j += i)
                {
                    if (str1.substr(j, i) != sub)
                    {
                        temp = 1;
                        break;
                    }
                }
                if (!temp)
                {
                    res = sub;
                    break;
                }
            }
            if (res != "")
            {
                int flg = 0;
                int l = res.size();
                for (int i = 0; i < str.size(); i += l)
                {
                    if (str.substr(i, l) != res)
                    {
                        flg = 1;
                        break;
                    }
                }
                if (flg) cout << -1 << endl;
                else
                {
                    int n = gcd(str1.size() / l, str.size() / l);
                    int val = ((str1.size() * str.size()) / (l * l)) / n;

                    for (int i = 0; i < val; i++)
                        cout << res;

                    cout << endl;
                }
            }
            else cout << -1 << endl;
        }
        else cout << str << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

string divide_left(string s)
{
    int n = s.size();
    s.resize(n / 2);
    return s;
}

string divide_right(string s)
{
    int n = (s.size()) / 2;
    vector<char> str;
    for (int i = n; i < s.size(); i++)
        str.push_back(s[i]);

    string ret(str.begin(), str.end());
    return ret;
}

vector<string> solve(string str)
{
    string dict = "abcdefghijklmnop";
    vector<string> res;

    for (int i = 0; i < str.size(); i++)
    {
        if (dict.size() <= 1 && i < str.size())
        {
            res.push_back(dict);
            dict = "abcdefghijklmnop";
        }
        if (str[i] == '0')
            dict = divide_left(dict);
        else
            dict = divide_right(dict);
    }

    res.push_back(dict);
    return res;
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<string> res = solve(str);
        for (auto i : res) cout << i;
        cout << endl;
    }

    return 0;
}
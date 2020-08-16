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

    string str;
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    set<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
            s.insert(str[i]);
    }
    
    if (s.size() == 26)
        cout << "pangram" << endl;
    else
        cout << "not pangram" << endl;
    
    return 0;
}
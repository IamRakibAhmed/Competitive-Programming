#include<bits/stdc++.h>
#include <cctype>
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

    string str;
    cin >> str;

    for_each(str.begin(), str.end(), [](char & c){
    c = ::tolower(c);
    });

    set<char> s;
    for (int i = 0; i < n; i++)
        s.insert(str[i]);

    if (s.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
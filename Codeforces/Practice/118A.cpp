#include <algorithm>
#include<bits/stdc++.h>
#include <cctype>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'y' || str[i] == 'Y' || str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        {
            str.erase(str.begin() + i);
            i--;
        }
    }

    transform(str.begin(), str.end(), str.begin(), :: tolower);
    for (auto i : str) cout << '.' << i;
    cout << endl;

    return 0;
}
/*
*   author: Rakib Ahmed
*/

#include <bits/stdc++.h>
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

    unordered_map <int, int> um;
    um[n]++;

    while(um[n] != 2)
    {
        n++;
        while(n % 10 == 0)
            n /= 10;

        um[n]++;
    }

    cout << um.size() << endl;
    return 0;
}
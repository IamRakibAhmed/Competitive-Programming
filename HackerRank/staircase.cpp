#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
    fast_io;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "#";

        cout << endl;
    }

    return 0;
}
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

    int n;
    cin >> n;
    
    vector<int> a;
    if (n % 2 == 0)
    {
        int sum = 0, i = 2;
        while (sum != n)
        {
            sum += i;
            a.push_back(i);
        }
    }
    else
    {
        int sum = 0, i = 2;
        while (sum != n - 3)
        {
            sum += i;
            a.push_back(i);
        }
        a.push_back(3);
    }
    

    cout << a.size() << endl;
    for (auto i : a)
        cout << i << " ";

    cout << endl;

    return 0;
}
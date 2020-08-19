#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll gcd(ll a, ll b)  
{  
    if (a == 0) return b;  
    return gcd(b % a, a);  
}  
 
ll lcm(ll a, ll b)  
{  
    return (a * b) / gcd(a, b);  
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
        ll a, b;
        cin >> a >> b;

        if (a + 1 == b)
        {
            if (lcm(a, b) > b)
                cout << "-1 -1" << endl;
            else 
                cout << a << " " << b << endl;
        }
        else
        {
            if ((a * 2) > b)
                cout << "-1 -1" << endl;
            else 
                cout << a << " " << a * 2 << endl;
        }
    }

    return 0;
}
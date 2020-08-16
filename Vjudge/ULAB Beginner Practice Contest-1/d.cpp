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
        int x1, y1, x2, y2, r1, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int diff_x = x2 - x1;
        int diff_y = y2 - y1;
        int diff_r = r2 - r1;

        int dist_xy = (diff_x * diff_x) + (diff_y * diff_y);
        int dist_r = diff_r * diff_r;

        if (dist_xy < dist_r)
            cout << "I" << endl;
        else if (dist_xy > dist_r)
            cout << "O" << endl;
        else
            cout << "E" << endl;
    }
    
    return 0;
}
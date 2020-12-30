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

    ll w, h, a, b, m, c;
    cin >> w >> h >> a >> b >> m >> c;

    ll wall_area = w * h;
    ll tile_area = a * b;

    ll req;
    if (wall_area % tile_area != 0) req = (wall_area / tile_area) + 1;
    else req = wall_area / tile_area;

    ll org_tile = req;

    while (req % 10 != 0) req++;

    ll rem_tiles = req - org_tile;
    ll tile_price = ((m / 10) * req);
    ll rem_price = tile_price - ((m * org_tile) / 10);

    cout << tile_price + (rem_price + (rem_tiles * c)) << endl;
    
    return 0;
}
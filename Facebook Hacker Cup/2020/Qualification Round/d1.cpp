/*
* Author: Rakib Ahmed
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

ll minfuel()
{
    int n, m;
    cin >> n >> m;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<pair<ll, int>> arr{pair<ll, int>(0, n - 1)};
    auto comp = [](pair<ll, int> x, pair<ll, int> y) { return x.first > y.first; };

    for (int i = n - 2; i > 0; i--)
    {
        if (a[i] == 0)
            continue;

        while (arr.size() > 0 && arr[0].second > i + m)
        {
            pop_heap(arr.begin(), arr.end(), comp);
            arr.pop_back();
        }

        if (arr.size() == 0)
            break;

        arr.push_back(pair<ll, int>(arr[0].first + a[i], i));
        push_heap(arr.begin(), arr.end(), comp);
    }
    while (arr.size() > 0 && arr[0].second > m)
    {
        pop_heap(arr.begin(), arr.end(), comp);
        arr.pop_back();
    }

    if (arr.size() == 0)
        return -1;

    return arr[0].first;
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int t, i = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case #" << i << ": " << minfuel() << endl;
        i++;
    }
  
    return 0;
}
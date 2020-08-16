#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

template <typename ForwardIterator>
ForwardIterator remove_duplicates(ForwardIterator first, ForwardIterator last)
{
    auto new_last = first;

    for (auto current = first; current != last; ++current)
    {
        if (find( first, new_last, *current) == new_last)
        {
            if (new_last != current) *new_last = *current;
            new_last++;
        }
    }

    return new_last;
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
        int n;
        cin >> n;

        vector<int> v(2*n, 0);

        for (int i = 0; i < 2*n; i++)
            cin >> v[i];

        v.erase(remove_duplicates(v.begin(), v.end()), v.end());

        for (int x : v)
            cout << x << ' ';
        
        cout << endl;
    }
    return 0;
}
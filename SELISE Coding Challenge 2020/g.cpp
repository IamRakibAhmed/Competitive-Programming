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
    string str;
    cin >> str;

    str.erase(remove_duplicates(str.begin(), str.end()), str.end());

    cout << 26 - str.size() << endl;

    return 0;
}
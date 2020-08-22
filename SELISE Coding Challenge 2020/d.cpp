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

    sort(str.begin(), str.end());
    str.erase(remove_duplicates(str.begin(), str.end()), str.end());
    vector<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'm' || str[i] == 'i' || str[i] == 'c' || str[i] == 'r' || str[i] == 'o' || str[i] == 's' || str[i] == 'f' || str[i] == 't')
            s.push_back(str[i]);
    }

    sort(s.begin(), s.end());
    string match = "microsft";
    
    if (match.size() != s.size())
        cout << "Only I love Microsoft!" << endl;
    else
    {
        sort(match.begin(), match.end());
        int flag = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != match[i])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "Only I love Microsoft!" << endl;
        else 
            cout << "We both love Microsoft!" << endl;
    }
    

    return 0;
}
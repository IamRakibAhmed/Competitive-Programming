#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int *lps_arr(string &t)
{
	int m = t.size();
	int *lps = new int[m + 1];
	lps[0] = -1;
	int j = -1;

	for (int i = 0; i < m; i++)
    {
		while (j >= 0 && t[i] != t[j])
            j = lps[j];

		j++;
		lps[i + 1] = j;
	}
	return lps;
}

vector<int> solve(string &s, string &t)
{
	int n = s.size();
	int m = t.size();
	int *lps = lps_arr(t);

	vector<int> res;
	int i = 0, j = 0;

	while (i < n)
    {
		if (s[i] == t[j])
        {
			i++;
            j++;
			if (j == m)
            {
				res.push_back(i - m);
				j = lps[j];
			}
		}
		else if (j > 0)
            j = lps[j];
		else
            i++;
	}
	delete[] lps;
	return res;
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    string str, s;
	cin >> str >> s;

	vector<int> res = solve(str, s);
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << endl;
    
    return 0;
}
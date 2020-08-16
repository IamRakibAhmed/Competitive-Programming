#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
#include<string>
#include<cstdio>
#include<cstdlib>
#include<iomanip>
#include<fstream>
using namespace std;
typedef long long ll;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main()
{
	fast_io;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s, t;
	cin >> s;
	cin >> t;

	int c = 0;
	for (ll i = 0; i < s.size(); i++)
	{
		if (s[i] != t[i])
		{
			c++;
		}
	}

	cout << c << endl;

	return 0;
}
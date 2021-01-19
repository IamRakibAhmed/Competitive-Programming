#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int n, d;
		cin >> n >> d;
		vector<int> a(n);
		int flag = 1;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			if (a[i] > d) flag = 0;
		}
		
		sort(a.begin(), a.end());
		if (a[0] + a[1] <= d || flag == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
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

    int t, T = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
		int a, b, c;
        cin >> a >> b >> c;

		bool r = a < b;
		bool flag = true;
		int temp = min(a, b);

		b = max(a, b);
		a = temp;
        int pre = max(0, a - c);

		vector<int> res(n, 0);
		for(int i = 0;i < pre;i++)
            res[i] = n - 1;

		if(c > 1)
        {
			for(int i = 0;i < c - 1;i++)
                res[i + pre] = n;

			res[n - 1 - (b - c)] = n;
		}
		else
        {
			for(int i = 0;i < c;i++)
                res[i + pre] = n;
		}
		for(int i = 0;i < b - c;i++)
            res[n - i - 1] = n - 1;
		for(int i = 0;i < n;i++)
        {
			if(res[i] == 0)
                res[i] = 1;
		}

		int mx = res[0];
		int cnt = 0;

		for(int i = 0;i < n;i++)
        {
			if(res[i] >= mx)
            {
				cnt++;
				mx = res[i];
			}
		}

		if(cnt != a)
            flag = false;

		mx = res[n - 1];
		cnt = 0;

		for(int i = n - 1;i >= 0;i--)
        {
			if(res[i] >= mx)
            {
				cnt++;
				mx = res[i];
			}
		}

		if(cnt != b)
            flag = false;

		cnt = 0;
		for(int i = 0;i < n;i++)
        {
			if(res[i] == n)
                cnt++;
		}

		if(cnt != c)
            flag = false;

		cout << "Case #" << T << ": ";
		if(flag)
        {
			if(!r)
                reverse(res.begin(), res.end());

			for(int i = 0;i < n;i++)
                cout << res[i] << ' ';
		}
		else
            cout << "IMPOSSIBLE";

		cout << endl;

        T++;
    }

    return 0;
}
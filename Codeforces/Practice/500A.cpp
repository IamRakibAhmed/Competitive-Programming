#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define mx (int)3e4 + 7

vector<int> graph[mx];
bool visit[mx];

void dfs(int source)
{
    visit[source] = true;
    for (int i = 0; i < graph[source].size(); i++)
    {
        int next = graph[source][i];
        if (!visit[next])
            dfs(next);
    }
}

int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, t;
    cin >> n >> t;

    for (int i = 1; i < t; i++)
    {
        int a;
        cin >> a;
        graph[i].push_back(i + a);
    }

    dfs(1);

    if (visit[t]) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
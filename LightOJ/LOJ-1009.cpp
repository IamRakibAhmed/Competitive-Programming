#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<int> graph[20005];
int color[20005];
enum {not_visited, black, red};

int bfs(int source)
{
    queue<int> q;
    int b = 0, r = 0;
    q.push(source);
    color[source] = black;
    b++;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        
        for (int i = 0; i < graph[f].size(); i++)
        {
            int node = graph[f][i];
            if (color[node] == not_visited)
            {
                q.push(node);
                if (color[f] == black)
                {
                    color[node] = red;
                    r++;
                }
                else
                {
                    color[node] = black;
                    b++;
                }
            }
        }
    }

    return max(b, r);
}

int main()
{
    fast_io
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int n;
        cin >> n;

        for (int i = 0; i < 20005; i++)
            graph[i].clear();

        while (n--)
        {
            int u, v;
            cin >> u >> v;

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        memset(color, 0, sizeof(color));
        int sum = 0;
        for (int i = 0; i < 20005; i++)
        {
            if (color[i] == 0 && !graph[i].empty())
                sum += bfs(i);
        }

        cout << "Case " << t << ": " << sum << endl;
    }

    return 0;
}
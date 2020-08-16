#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void gradingStudents(int n)
{
    int a;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a >= 38 && a % 5 >= 3)
        {
            while (a % 5 != 0)
                a++;
        }
        cout << a << endl;
    }
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int n;
    cin >> n;
    gradingStudents(n);
    return 0;
}
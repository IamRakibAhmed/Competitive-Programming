#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

vector<string> str[70]
{
    {"impossible"},
    {"impossible"},
    {"impossible"},
    {"impossible"},
    {
        "ABBC",
        "ABBC",
        "AACC",
        "DDDD",
    },
    {
        "XXXTr",
        "XTTTr",
        "XTErr",
        "mmEEr",
        "mmmEE"
    },
    {
        "ABBBBC",
        "ADBCCC",
        "ADBCCE",
        "ADEEEE",
        "ADEFFF",
        "ADDFFF",
    },
    {
        "abbbcdd",
        "aebcccd",
        "aebcccd",
        "aebfddd",
        "aebffff",
        "aeggggf",
        "aeegggf",
    },
    {
        "ABBBBBCC",
        "ADBBBFFC",
        "ADFFFFFC",
        "ADFECCCC",
        "ADEEEEHH",
        "ADGEEEHH",
        "ADGGGGHH",
        "ADDGGGHH",
    },
    {
        "ABBBBBBCC",
        "ADBBBECCC",
        "ADEEEECCC",
        "ADEEEEFCF",
        "ADGHHFFFF",
        "ADGHHHFFF",
        "ADGHHHIII",
        "ADGGGHIII",
        "ADDGGGIII",
    },
    {
        "AEEEEEGGGG",
        "ABEFFFGGGG",
        "ABEFFFFGGH",
        "ABEFFFIIIH",
        "ABEJJJIIHH",
        "ABEJJJIIHH",
        "ABJJJJIIHH",
        "ABDDDDDIHH",
        "ABDDDDDCCC",
        "ABBCCCCCCC"
    }
};

int lim, n;
char ch;
char arr[70][5];

void add()
{
    if (ch == '9') ch = 'a';
    else if (ch == 'z') ch = 'A';
    else ch++;
}

void func1()
{
    for (int i = 0; i < n - 1; i++) arr[i][0] = ch;

    arr[lim][1] = ch;
    add();
    arr[n - 1][0] = ch;

    for (int i = lim + 1; i < n; i++) arr[i][1] = ch;
    for (int i = n - 1, j = 0; j < lim; i--, j++) arr[i][2] = ch;

    add();

    for (int i = 0; i < lim; i++) arr[i][1] = ch;
    for (int i = 0; i < n - lim; i++) arr[i][2] = ch;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++) cout << arr[j][i];
        cout << endl;
    }

    add();
    lim++;
}

void func2()
{
    for (int i = 0; i < n - 1; i++) arr[i][0] = ch;
    arr[lim][1] = ch;
    add();
    arr[n - 1][0] = ch;

    for (int i = lim + 1; i < n; i++) arr[i][1] = ch;
    arr[n - 1][2] = ch;

    for (int i = 0, j = n - 1; i < lim - 1; i++, j--) arr[j][3] = ch;
    add();

    for (int i = 0; i < lim; i++) arr[i][1] = ch;
    arr[0][2] = ch;

    for (int i = 0; i < n - lim - 1; i++) arr[i][3] = ch;
    add();

    for (int i = 1; i < n - 1; i++) arr[i][2] = ch;
    for (int i = n - lim - 1; i < n - lim + 1; i++) arr[i][3] = ch;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < n; j++) cout << arr[j][i];
        cout << endl;
    }

    lim++;
}

void solve()
{
    cin >> n;
    if (n > 10)
    {
        lim = 1;
        ch = '0';
        if (n <= 3)
        {
            cout << "impossible" << endl;
            return;
        }
        if (n % 3 == 0)
        {
            for (int t = n; t != 0; t -= 3) func1();
        }
        else if (n % 3 == 1)
        {
            for (int i = 0; i < n; i++) cout << ch;
            cout << endl;
            add();
            for (int t = n - 1; t != 0; t -= 3) func1();
        }
        else if (n % 3 == 2)
        {
            for (int i = 0; i < n; i++) cout << ch;
            cout << endl;
            add();
            for (int t = n - 5; t != 0; t -= 3) func1();
            func2();
        }
    }
    else
    {
        for (auto &i : str[n])
            cout << i << endl;
    }
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
    while (t--) solve();
    return 0;
}
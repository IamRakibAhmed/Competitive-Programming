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

    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'q') str[i] = 'a';
        else if (str[i] == 'w') str[i] = 'b';
        else if (str[i] == 'e') str[i] = 'c';
        else if (str[i] == 'r') str[i] = 'd';
        else if (str[i] == 't') str[i] = 'e';
        else if (str[i] == 'y') str[i] = 'f';
        else if (str[i] == 'u') str[i] = 'g';
        else if (str[i] == 'i') str[i] = 'h';
        else if (str[i] == 'o') str[i] = 'i';
        else if (str[i] == 'p') str[i] = 'j';
        else if (str[i] == 'a') str[i] = 'k';
        else if (str[i] == 's') str[i] = 'l';
        else if (str[i] == 'd') str[i] = 'm';
        else if (str[i] == 'f') str[i] = 'n';
        else if (str[i] == 'g') str[i] = 'o';
        else if (str[i] == 'h') str[i] = 'p';
        else if (str[i] == 'j') str[i] = 'q';
        else if (str[i] == 'k') str[i] = 'r';
        else if (str[i] == 'l') str[i] = 's';
        else if (str[i] == 'z') str[i] = 't';
        else if (str[i] == 'x') str[i] = 'u';
        else if (str[i] == 'c') str[i] = 'v';
        else if (str[i] == 'v') str[i] = 'w';
        else if (str[i] == 'b') str[i] = 'x';
        else if (str[i] == 'n') str[i] = 'y';
        else if (str[i] == 'm') str[i] = 'z';
    }

    cout << str << endl;

    return 0;
}
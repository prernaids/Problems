#include <bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin >> y;
    for (int i = y + 1;; i++)
    {
        string s = to_string(i);
        if (s[0] == s[1] || s[2] == s[3] || s[0] == s[2] || s[0] == s[3] || s[1] == s[2] || s[1] == s[3])
        {
        }

        else
        {
            cout << s << endl;
            break;
        }
    }
}
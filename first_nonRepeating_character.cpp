#include <bits/stdc++.h>

using namespace std;

int firstNonRepeat(string s)
{
    int index[256];

    for (int i = 0; i < 256; i++)
        index[i] = -1;

    for (int i = 0; i < s.length(); i++)
    {
        if (index[s[i]] == -1)
            index[s[i]] = i;
        else
            index[s[i]] = -2;
    }

    int ans = INT_MAX;

    for (int i = 0; i < 256; i++)
        if (index[i] >= 0)
            ans = min(ans, index[i]);

    if (ans == INT_MAX)
        return -1;
    else
        return ans;
}

int main()
{
    string str;
    cin >> str;

    int firstIndex = firstNonRepeat(str);

    if (firstIndex != -1)
        cout << str[firstIndex] << endl;
    else
        cout << "-1" << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    vector<char> result;

    for (char c = a; c <= b; c++)
    {
        if (c >= 'a' && c <= 'z')
        {
            result.push_back(c - 'a' + 'A');
        }
        else if (c >= 'A' && c <= 'Z')
        {
            result.push_back(c);
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1)
        {
            cout << " ";
        }
    }

    return 0;
}
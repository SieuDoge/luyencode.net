#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    getline(cin, a);
    reverse(a.begin(), a.end());
    for (long long unsigned i = 0; i <= a.size();)
    {
        /* code */
        if (a[i] == '0')
        {
            a.erase(a.begin());
        }
        else
        {
            break;
        }
    }
    cout << a;

    return 0;
}
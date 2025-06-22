#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    getline(cin, a);
    if (a[0] == '-')
    {
        cout << a.size() - 1;
    }
    else
    {
        cout << a.size();
    }
}

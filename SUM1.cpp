#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int index(0);
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        index += i;
    }
    cout << index;
    return 0;
}
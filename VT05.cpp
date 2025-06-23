#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    int index(0);
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] == x)
        {
            index++;
        }
    }
    cout << index;

    return 0;
}
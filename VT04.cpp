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

    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i] == x)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";

    return 0;
}
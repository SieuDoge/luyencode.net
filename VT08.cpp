#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>
        a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    a.push_back(0);
    a.insert(a.begin(), 0);
    for (int i = 1; i <= n; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            a[i] += abs(a[i + 1] - a[i - 1]);
        }
    }
    a.erase(a.end());
    a.erase(a.begin());
    for (auto v : a)
    {
        /* code */
        cout << v << " ";
    }

    return 0;
}
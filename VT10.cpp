#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        /* code */
        for (int j = i + 1; j < n; j++)
        {
            /* code */
            if (a[i] < a[j])
                swap(a[i], a[j]);
        }
    }
    for (auto v : a)
    {
        cout << v << " ";
    }

    return 0;
}
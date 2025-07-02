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
    int max = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        int index = 0;
        for (int j = 0; j < n; ++j)
        {
            index = a[i] - a[j];
            if (index > max)
            {
                max = index;
            }
        }
    }
    cout << max;
    return 0;
}
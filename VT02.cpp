#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int first = INT_MIN, second = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] > second && a[i] != first)
        {
            second = a[i];
        }
    }

    if (second == INT_MIN)
    {
        cout << "NOT FOUND\n";
    }
    else
    {
        cout << second << "\n";
    }

    return 0;
}
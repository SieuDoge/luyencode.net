#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }

    int MAX = arr[0];
    int local = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= MAX)
        {
            MAX = arr[i];
            local = i;
        }
    }
    cout << local;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    long long couple1;
    long long couple2;
    long long max = 0;
    for (long long i = 0; i < n - 1; i++)
    {
        /* code */
        for (long long j = i + 1; i < n; i++)
        {
            /* code */
            if (max < (a[i] + a[j]))
            {
                max = a[i] + a[j];
                couple1 = a[i];
                couple2 = a[j];
            }
            if (max < (a[j] + a[i]))
            {
                max = a[j] + a[i];
                couple1 = a[j];
                couple2 = a[i];
            }
        }
    }
    // if (max < (a[0] + a[n - 1]))
    // {
    //     max = a[0] + a[n - 1];
    //     couple1 = a[0];
    //     couple2 = a[n - 1];
    // }
    if (max < (a[n - 1] + a[0]))
    {
        couple1 = a[n - 1];
        couple2 = a[0];
    }
    cout << couple1 << " " << couple2;

    return 0;
}
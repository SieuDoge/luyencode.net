#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    for (long long i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

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
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            if (a[i] != a[i - 1])
            {
                cout << a[i] << " ";
            }
        }
    }

    return 0;
}
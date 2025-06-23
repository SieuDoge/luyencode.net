#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> x;
    long long m(0);
    for (int i = 0; m <= n; i++)
    {
        /* code */
        m += i;
        if (m > n)
        {
            break;
        }
        else
        {
            x.push_back(i);
        }
    }
    cout << x.back() << endl;

    return 0;
}
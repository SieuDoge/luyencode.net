#include <bits/stdc++.h>

using namespace std;

int dp(int i, int stop)
{
    if (i > stop)
        return 0;
    int sign = (i % 2 == 1) ? 1 : -1;
    return sign * i + dp(i + 1, stop);
}

int main()
{
    int n;
    cin >> n;
    int stop = 3 * n + 1;
    cout << dp(1, stop);
    return 0;
}
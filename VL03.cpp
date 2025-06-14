#include <bits/stdc++.h>

using namespace std;
int dp(int n);
int main()
{
    int n;
    cin >> n;
    cout << dp(n) + 2 * n;
    return 0;
}

int dp(int n)
{
    if (n == 1)
        return 0;
    return (n + dp(n - 1));
}
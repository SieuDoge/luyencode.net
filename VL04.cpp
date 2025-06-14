#include <bits/stdc++.h>

using namespace std;
double dp(int n);
int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(4) << dp(n);
    return 0;
}

double dp(int n)
{
    if (n == 2)
        return 1.0 / 2;
    return 1.0 / n + dp(n - 1);
}
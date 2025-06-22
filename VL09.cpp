#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n;
    cin >> x >> n;
    long long tu = 1, mau = 1;
    double s = 0;
    for (int i = 1; i <= n; i++)
    {
        tu *= x;
        mau *= i;
        s += (double)tu / mau;
    }
    cout << fixed << setprecision(2) << s;
}

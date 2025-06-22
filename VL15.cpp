#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;

    if (b == 0)
    {
        cout << "INVALID";
        return 0;
    }

    int ucln = gcd(abs(a), abs(b));

    int tu_so = a / ucln;
    int mau_so = b / ucln;

    if (mau_so < 0)
    {
        tu_so = -tu_so;
        mau_so = -mau_so;
    }

    if (mau_so == 1)
    {
        cout << tu_so;
    }
    else
    {
        cout << tu_so << " " << mau_so;
    }

    return 0;
}
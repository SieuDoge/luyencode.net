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
    int bcll = abs(a * b) / gcd(abs(a), abs(b));
    cout << bcll;
    return 0;
}
#include <bits/stdc++.h>
#include <cmath>

using namespace std;
bool prime(int a);
int main()
{
    int a;
    cin >> a;
    if (prime(a))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}

bool prime(int a)
{
    if (a <= 1)
        return false;
    if (a <= 3)
        return true;
    for (int i = 2; i <= sqrt(a); ++i)
    {
        if (a % i == 0)
            return false;
    }
    return true;
}

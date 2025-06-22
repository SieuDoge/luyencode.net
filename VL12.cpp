#include <bits/stdc++.h>
#include <cmath>

using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a == 0)
    {
        cout << "INF";
    }
    else
    {
        a = abs(a);
        for (int i = a; i >= 1; --i)
        {
            if (a % i == 0)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}
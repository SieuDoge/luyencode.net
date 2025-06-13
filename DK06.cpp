#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Code Here //

    double a, b;
    cin >> a >> b;
    if (a == 0)
    {
        if (b == 0)
        {
            cout << "WOW";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        double x = -b / a;
        cout << fixed << setprecision(2) << x;
    }

    return 0;
}
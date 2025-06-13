#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(2);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "WOW";
            else
                cout << "NO";
        }
        else
        {
            double x = -1.0 * c / b;
            cout << x;
        }
    }
    else
    {
        int delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            cout << "NO";
        }
        else if (delta == 0)
        {
            double x = -b / (2.0 * a);
            cout << x;
        }
        else
        {
            double x1 = (-b + sqrt(delta)) / (2.0 * a);
            double x2 = (-b - sqrt(delta)) / (2.0 * a);
            if (x1 > x2)
                swap(x1, x2);
            cout << x1 << " " << x2;
        }
    }
    return 0;
}
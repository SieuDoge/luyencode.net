#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b;
    char op;
    cin >> a >> op >> b;

    cout << fixed << setprecision(2);

    if (op == '+')
    {
        cout << a + b;
    }
    else if (op == '-')
    {
        cout << a - b;
    }
    else if (op == '*')
    {
        cout << a * b;
    }
    else
    {
        if (b == 0)
        {
            cout << "Math Error";
        }
        else
            cout << a / b;
    }
    return 0;
}
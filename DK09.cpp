#include <bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin >> year;
    if (0 >= year || year > 10000)
    {
        cout << "INVALID";
    }
    else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;
}
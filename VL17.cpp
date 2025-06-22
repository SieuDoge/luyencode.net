#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, index(0);
    cin >> a;
    a = abs(a);
    for (int i = 1; i <= a; i++)
    {
        /* code */
        if (a % i == 0)
            index++;
    }
    cout << index;
    return 0;
}
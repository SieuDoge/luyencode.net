#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int index(0);
    for (int i = a; i <= b; i++)
    {
        /* code */
        if (i % 2 == 0)
        {
            index += i;
        }
    }
    cout << index;

    return 0;
}
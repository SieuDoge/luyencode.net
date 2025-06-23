#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a(10);
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cin >> a[i];
    }
    int x;
    cin >> x;
    bool check = false;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if (a[i] == x)
        {
            check = true;
            cout << i + 1 << " ";
        }
    }
    if (!check)
    {
        cout << "-1";
    }

    return 0;
}
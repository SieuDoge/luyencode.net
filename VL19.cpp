#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    vector<int> x;
    for (int i = a + 1; i < b; i++)
    {
        /* code */
        if (i % 3 == 0)
            x.push_back(i);
    }
    if (x.empty())
    {
        cout << "NOT FOUND";
    }
    else
    {
        for (int i = x.size() - 1; i >= 0; i--)
        {
            cout << x[i] << " ";
        }
    }
    return 0;
}
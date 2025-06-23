#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int sum(0), index(0);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> x;
        if (x % 2 != 0)
        {
            sum += x;
            index++;
        }
    }
    if (sum == 0)
    {
        cout << "0";
        return 0;
    }
    cout << fixed << setprecision(4) << (double)sum / index;

    return 0;
}
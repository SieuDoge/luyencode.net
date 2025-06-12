#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float a, b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    if (b == 0) {
        cout << "ERROR" << endl;
    } else {
        cout << fixed << setprecision(2) << a / b << endl;;
    }
    return 0;
}

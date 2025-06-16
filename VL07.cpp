// #include <bits/stdc++.h>

// using namespace std;

// string multiply(string num, string x) // 123 30
// {
//     reverse(num.begin(), num.end()); // {(321)}
//     int x = stoi(x);
//     int carry = 0;
//     string res = "";
//     for (char c : num)
//     {
//         int multi = (c - '0') * n + carry;
//         res += (multi % 10) + '0';
//         carry = multi / 10;
//     }
//     while (carry)
//     {
//         res += (carry % 10) + '0';
//         carry /= 10;
//     }
//     reverse(res.begin(), res.end());
//     return res;
// }

// string factorial(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         string res = multiply(res, i);
//     }
//     return res;
// }

// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     string tohop = factorial(n) / multiply(factorial(k), factorial(n - k));
//     cout << tohop;
//     return 0;
// }

/*

bignum phiền vcl
anyway tính ra bài này cần lồn gì bignum có unsigned long long mà masygsdyguvbdsigdfihg sd

*/

#include <bits/stdc++.h>
using namespace std;

unsigned long long c(int n, int k)
{
    if (k > n - k)
        k = n - k;
    unsigned long long res = 1;
    for (int i = 1; i <= k; i++)
    {
        res *= (n - i + 1);
        res /= i;
    }
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << c(n, k);
    return 0;
}

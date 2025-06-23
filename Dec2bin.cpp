#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void dec2bin(ll n)
{
    if (n == 0)
    {
        cout << "0" << endl;
        return;
    }
    vector<ll> a;
    while (n > 0)
    {
        /* code */
        a.push_back(n % 2);
        n /= 2;
    }
    reverse(a.begin(), a.end());
    for (auto v : a)
    {
        cout << v;
    }
    cout << endl;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        /* code */
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        /* code */
        dec2bin(a[i]);
    }

    return 0;
}
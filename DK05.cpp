#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,a;
    cin >> n;
    a = sqrt(n);
    if (a * a == n){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

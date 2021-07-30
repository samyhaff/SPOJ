#include <bits/stdc++.h>

using namespace std;

long long binpow(long long a, long long b)
{
    a %= 10;
    long long res = 1; 

    while (b > 0) {
        if (b & 1) res = res * a % 10;
        a = a * a % 10;
        b >>= 1;
    }

    return res;
}

int main()
{
    int t, a, b;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;
        cout << binpow(a, b) << endl;
    }

    return 0;
}

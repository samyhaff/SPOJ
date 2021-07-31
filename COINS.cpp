#include <bits/stdtr1c++.h>

using namespace std;

#define MAX(a,b) (((a)>(b))?(a):(b))

map <int, long long> results;

long long solve(int n)
{
    if (n == 0) return 0;

    long long r = results[n];

    if (r == 0) {
        r = MAX(n, solve(n/2) + solve(n/3) + solve(n/4));
        results[n] = r;
    }

    return r;
}

int main()
{
    int n;

    while (cin >> n) {
        cout << solve(n) << endl;
    }

    return 0;
}

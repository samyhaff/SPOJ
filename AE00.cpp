#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    
    for (int i = 1; i <= sqrt(n); i++) {
        for (int j = i; i * j <= n; j++) {
            c++;
        }
    }

    /* c += sqrt(n); */

    cout << c << endl;

    return 0;
}

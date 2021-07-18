#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s;
    cin >> n;

    while (n != 0) {
        s = 0; 
        for (int i = 1; i <= n; i++) {
            s += i * i;
        }

        cout << s << endl;
        cin >> n;
    }

    return 0;
}

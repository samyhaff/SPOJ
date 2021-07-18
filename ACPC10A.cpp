#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    while (!(!a && !b && !c))
    {
        if (b - a == c - b) {
            cout << "AP " << 2 * c - b << endl;
        }
        else {
            cout << "GP " << c * c / b << endl;
        }

        cin >> a >> b >> c;
    }

    return 0;
}

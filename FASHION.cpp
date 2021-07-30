#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--) {
        cin >> n; 
        vector<int> x(n), y(n);

        for (int i = 0; i < n; i++)
            cin >> x[i];
        for (int i = 0; i < n; i++)
            cin >> y[i];

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += x[i] * y[i];

        cout << sum << endl;
    }

    return 0;
}

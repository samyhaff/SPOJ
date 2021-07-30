#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n != -1)
    {
        vector<int> sizes(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> sizes[i];
            sum += sizes[i];
        }

        if (sum % n)
            cout << -1 << endl;
        else {
            int moves = 0;
            for (auto size: sizes) {
                if (size < sum / n)
                    moves += sum / n - size;
            }
            cout << moves << endl;
        }

        cin >> n;
    }

    return 0;
}

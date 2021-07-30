#include <bits/stdc++.h>

using namespace std;

bool test(int distance, vector<int> &x, int c)
{
    --c;
    int last_pos = x[0];
    for (auto pos: x) {
        if ((pos - last_pos) >= distance) {
            if (!--c)
                return true;
            last_pos = pos;
        }
    }
    
    return false;
}

int binarySearch(vector<int> &x, int c)
{
    long long l = 0;
    long long r = x.back() - x[0];
    long long  mid, best;

    while (l <= r) {
        mid = l + (r - l) / 2;
        if (test(mid, x, c)) {
            best = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    
    return best;
}

int main()
{
    int t, n, c;

    cin >> t;

    while (t--) {
        cin >> n >> c;
        vector<int> x(n);

        for (int i = 0; i < n; i++)
            cin >> x[i];

        sort(x.begin(), x.end());

        cout << binarySearch(x, c) << endl;
    }

    return 0;
}

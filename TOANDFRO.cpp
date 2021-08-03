#include <bits/stdc++.h>

using namespace std;

string getOriginal(string msg, int col)
{
    string original = "";

    for (int c = 0; c < col; c++) {
        int step = 2 * (col - c) - 1;
        int i = c;
        while (i < msg.size()) {
            original += msg[i];
            i += step;
            step = (step == 2 * c + 1) ? 2 * (col - c) - 1 : 2 * c + 1;
        }
    }

    return original;
}

int main()
{
    int col;
    string msg;

    cin >> col;

    while (col)
    {
        cin >> msg;
        cout << getOriginal(msg, col) << endl;
        cin >> col;
    }

    return 0;
}

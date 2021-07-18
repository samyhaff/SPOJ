#include <bits/stdc++.h>

using namespace std;

bool isOperation(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '^' || c == '/');
}

int main()
{
    int t;
    cin >> t;

    string expr;
    stack<char> s;

    getchar();
    while (t--) {
        getline(cin, expr);
        for (auto c : expr) {
            if (isOperation(c)) {
                s.push(c);
            }
            else if (c == ')') {
                cout << s.top();
                s.pop();
            }
            else if (c != '(') {
                cout << c;
            }
        }
        cout << endl;
    }

    return 0;
}

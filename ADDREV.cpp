#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{
    int rev = 0;
    
    while (x != 0)
    {
        rev = 10 * rev + (x % 10);
        x /= 10;
    }

    return rev;
}

int main()
{
    int n, a, b;
    cin >> n;    

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << reverse(reverse(a) + reverse(b)) << endl;
    }

    return 0;
}

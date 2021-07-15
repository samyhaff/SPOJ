#include <bits/stdtr1c++.h> 

using namespace std;

int Z(int n, int k)
{
    if (n / k == 0)
        return 0;
    return n / k + Z(n, 5 * k);
}

int main()
{
    int t;
    long long n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << Z(n, 5) << endl;
    }

    return 0;
}

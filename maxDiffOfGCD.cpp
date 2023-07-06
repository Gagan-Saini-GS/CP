#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, m;
        cin >> n >> m;

        long long int a, b;

        // long long int x = m / 2;
        // cout << x << endl;
        // x = 2 * n;
        // cout << x << endl;
        long long int diff = -1;

        for (int i = n; i <= 2 * n; i++)
        {
            long long int d = m / i;
            long long int currDiff = (i * d) - i;
            if (currDiff > diff)
            {
                a = i;
                b = i * d;
                diff = currDiff;
            }
        }
        cout << a << " " << b << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // added the two lines below (for fast I/O)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s, t, u;
        cin >> s >> t >> u;

        int k = t[0] - s[0];
        if (k < 0)
        {
            k += 26;
        }

        for (int i = 0; i < n; i++)
        {
            // int temp = u[i];
            // cout << temp << endl;
            if (u[i] + k > 122)
            {
                int x = u[i] + k - 122 - 1;
                // cout << x << endl;
                u[i] = 'a' + x;
            }
            else
            {
                u[i] += k;
            }
        }

        cout << u << endl;
    }

    return 0;
}

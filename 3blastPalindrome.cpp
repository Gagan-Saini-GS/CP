#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
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

        string str;
        cin >> str;

        if ((n - 1) % 3 == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        bool flag = false;

        for (int i = 0; i < 26; i++)
        {
            int l = n, h = -1;

            for (int j = 0; j < n; j++)
            {
                if ((str[j] - 'a') == i && j % 3 == 0)
                {
                    l = j;
                    break;
                }
            }

            for (int j = n - 1; j >= 0; j--)
            {
                if ((str[j] - 'a') == i && (n - 1 - j) % 3 == 0)
                {
                    h = j;
                    break;
                }
            }

            if (l <= h)
            {
                flag = true;
                break;
            }
        }

        cout << ((flag) ? "YES" : "NO") << endl;
    }

    return 0;
}

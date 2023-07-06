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

        string str;
        cin >> str;
        int count = 0;
        int left = 0, right = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == ':')
            {
                flag = true;
            }

            if (flag)
            {
                if (str[i] == ')')
                {
                    right++;
                }
                else if (str[i] == '(')
                {
                    left++;
                }
                else
                {
                    // colon
                    if (right > 0 && left == 0)
                    {
                        count++;
                    }

                    left = 0;
                    right = 0;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}

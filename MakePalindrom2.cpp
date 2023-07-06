#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
            count++;
    }

    string ans = "";
    char x = '0';

    if (count < (n - count))
    {
        count = n - count;
        x = '1';
    }

    for (int i = 0; i < count; i++)
    {
        ans.push_back(x);
    }

    cout << ans << endl;

    return 0;
}
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
        ll n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        map<ll, int> mp;
        ll curr = 0;

        for (int i = 0; i < n - 2; i++)
        {
            curr += ((n - i - 2) * (n - i - 1)) / 2;
            mp[curr] = arr[i];
        }

        for (int i = 0; i < k; i++)
        {
            ll temp = 0;
            cin >> temp;

            cout << mp.lower_bound(temp)->second << endl;
        }
    }

    return 0;
}

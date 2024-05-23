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

    ll mod = 1e9 + 7;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> ans(n, 0);

        for (int k = 1; k <= n; k++)
        {
            priority_queue<int> pq;
            ll score = 0;

            for (int i = 0; i < k - 1; i++)
            {
                pq.push(arr[i]);
            }

            for (int i = k - 1; i < n; i++)
            {
                pq.push(arr[i]);

                cout << score << " " << pq.top() << endl;
                score += pq.top();
                pq.pop();
            }

            // if (k == n)
            // {
            //     score += pq.top();
            //     pq.pop();
            // }

            cout << score << endl;
            ans[k - 1] = score;
            score = 0;
        }

        for (auto &it : ans)
        {
            cout << it << " ";
        }

        cout << endl;
    }

    return 0;
}

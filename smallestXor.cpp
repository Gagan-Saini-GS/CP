#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;

        long long arr[n];
        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            pq.push(arr[i]);
        }

        while (y > 0)
        {
            long long top = pq.top();
            if ((top ^ x) > top)
            {
                pq.pop();
                pq.push(top ^ x);
                y--;
            }
            else
            {
                if ((y & 1) == 0)
                { // when n is one
                    break;
                }
                else
                {
                    pq.pop();
                    pq.push(top ^ x);
                    break;
                }
            }
        }

        while (pq.size() != 0)
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }
    return 0;
}

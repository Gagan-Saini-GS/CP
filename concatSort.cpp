#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> temp)
{
    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
}

bool check(int *arr, vector<int> p, vector<int> q)
{
    int j = 0;
    for (int i = 0; i < p.size(); i++)
    {
        if (arr[j] != p[i])
            return false;
        j++;
    }

    for (int i = 0; i < q.size(); i++)
    {
        if (arr[j] != q[i])
            return false;
        j++;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        vector<int> p;
        vector<int> q;
        int dup[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            dup[i] = arr[i];
        }

        sort(dup, dup + n);
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == dup[j])
            {
                p.push_back(arr[i]);
                j++;
            }
            else
            {
                q.push_back(arr[i]);
            }
        }

        print(p);
        print(q);

        if (check(dup, p, q))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

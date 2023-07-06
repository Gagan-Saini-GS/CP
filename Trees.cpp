#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int m;
    vector<int> edge;
};

int main()
{
    int n;
    cin >> n;

    // Input
    Node trees[n];
    for (int j = 0; j < n; j++)
    {
        Node curr;
        cin >> curr.m;

        for (int i = 0; i < curr.m - 1; i++)
        {
            int u, v, w;
            cin >> u >> v >> w;

            curr.edge.push_back(u);
            curr.edge.push_back(v);
            curr.edge.push_back(w);
        }

        trees[j] = curr;
    }

    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    cout << ":)" << endl;

    return 0;
}

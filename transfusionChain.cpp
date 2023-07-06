// Starters 95
#include <bits/stdc++.h>
using namespace std;

// A -> A OR AB
// B -> B OR AB
// AB -> AB
// O -> A, B, AB, O

// first I must have O's, then A or B and then AB should be in last.
// means total length = No. of O's + max(A's,B's) + AB's.

int transfusionChain(string arr[], int n)
{
    int a = 0, b = 0, o = 0, ab = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == "A")
            a++;
        if (arr[i] == "B")
            b++;
        if (arr[i] == "O")
            o++;
        if (arr[i] == "AB")
            ab++;
    }

    return o + max(a, b) + ab;
}

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
        string arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int len = transfusionChain(arr, n);
        cout << "Max length of transfusion chain = " << len << endl;
    }

    return 0;
}

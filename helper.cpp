#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

// Generate Prime Number <= n
vector<int> sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; ++i)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
        }
    }

    vector<int> primeNumbers;

    for (int i = 0; i <= n; i++)
    {
        if (isPrime[i])
            primeNumbers.push_back(i);
    }

    return primeNumbers;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

// Bit Manipulation
bool isPowerOfTwo(int n)
{
    return (n & (n - 1)) == 0;
}

int countSetBits(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int getLSB(int n)
{
    return n & (-n);
}

int toggleBit(int n, int pos)
{
    return n ^ (1 << pos);
}

bool isBitSet(int n, int pos)
{
    return (n & (1 << pos)) != 0;
}

int setBit(int n, int pos)
{
    return n | (1 << pos);
}

int clearBit(int n, int pos)
{
    return n & (~(1 << pos));
}

int rangeBitwiseAnd(int left, int right)
{
    while (left < right)
        right &= (right - 1);

    return right;
}

int main()
{
    // int n;
    // cin >> n;

    // vector<int> ans = sieve(n);
    // for (int i = 0; i < ans.size(); i++)
    //     cout << ans[i] << " ";

    // cout << endl;

    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);

    while (pq.size() != 0)
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
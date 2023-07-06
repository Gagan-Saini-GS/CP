#include <bits/stdc++.h>
using ll = long long;
using pii = std::pair<int, int>;
constexpr int inf = 0x3f3f3f3f;
constexpr int mod = 998244353;
constexpr int mod2 = 1e9 + 7;
using namespace std;

vector<ll> fact, invf;

// I did not understood the solution

ll powmod(ll a, ll b)
{
    ll res = 1;
    a %= mod;
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
    }
    return res;
}

void build(int n)
{
    fact = vector<ll>(n + 1, 1);
    invf = vector<ll>(n + 1, 1);
    for (int i = 2; i <= n; i++)
        fact[i] = fact[i - 1] * i % mod;
    invf[n] = powmod(fact[n], mod - 2);
    for (int i = n - 1; i >= 2; i--)
        invf[i] = invf[i + 1] * (i + 1) % mod;
}

// nCr

ll nChoosek(int n, int k)
{
    if (n < k)
        return 0;
    return fact[n] * invf[k] % mod * invf[n - k] % mod;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    // build(1e5);

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        int one = count(a.begin(), a.end(), 1); // count number of one
        ll ans = 0;
        for (int len = 1; len <= one; ++len)
        {
            cout << "Hello" << endl;
            ll cur = nChoosek(one, len) * fact[len] % mod * (n - len + 1) % mod * fact[n - len] % mod;
            ans = (ans + cur) % mod;
        }
        cout << ans << '\n';
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// long long getSum(int *arr, int n)
// {
//     long long count = 0;
//     long long len = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 1)
//         {
//             len++;
//         }
//         else
//         {
//             count += (len * (len + 1)) / 2;
//             len = 0;
//         }
//     }

//     count += (len * (len + 1)) / 2; // last me 1 aaya ho uske liye
//     // cout << count << endl;
//     return count;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         int arr[n];
//         int zero = 0, one = 0;
//         long long sum = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i];
//             if (arr[i] == 0)
//                 zero++;
//             else
//                 one++;
//         }

//         int temp = one * (one - 1);
//         int score = (one * (one + 1)) / 2;
//         sum += temp * score;
//         sum += getSum(arr, n);
//         cout << sum << endl;
//         // sarre one vale ka answer temp*score hi h

//         // cout << score * temp << endl;
//         // sum += 2 * temp * score;
//         // cout << sum << endl;
//     }
//     return 0;
// }

// TO PASS ALL SAMPLE TEST CASES

// Total together one is = one*(one-1);

// int temp = one * (one - 1);
// sum += (n - 2) * temp * (getSum(arr, n));

// int score = (one * (one + 1)) / 2;
// sum += temp * score;

// if (zero == 1)
// {
//     sum += temp * score;
// }
// else
// {
//     int temp2 = zero * (zero - 1);
//     sum += temp2 * score * score;
// }
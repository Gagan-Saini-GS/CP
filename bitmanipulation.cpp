#include <iostream>
#define ll long long
using namespace std;

// 1010'0'011 pos = 4
// 0000'1'000 do and "BITWISE OR" with it
// 0000'1'000 === 1<<(pos-1);
int setBit(int n, int pos)
{
    int mask = 1 << (pos - 1);
    return n | mask;
}

// 1111, pos = 2
// 1101 -> Output

// or may named as clearBit
int unsetBit(int n, int pos)
{
    int mask = 1 << (pos - 1);
    return n & ~mask;
}

// n = 11110010
// pos = 4 => 0 -> Output
// pos = 6 => 1 -> Output

int getBit(int n, int pos)
{
    int mask = 1 << (pos - 1);
    int newNumber = n & mask;

    return (newNumber == 0) ? 0 : 1;
}

// 100 => 1
// 1110011 => 5
// 1011011001 => 6
// 248 = 11111000

int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        if (n & 1 == 1)
            count++;

        n >>= 1;
    }

    return count;
}

bool isPower2(int n)
{
    // Method 1 use countSetBits(n) if it return 1 then true else false

    // Method 2 Direct Method
    // while (n)
    // {
    //     if (n % 2 != 0 && n != 1)
    //         return false;

    //     n >>= 1;
    // }

    // return true;

    // Method 3
    return (n & (n - 1)) == 0;
}

// 248 => 256
// 132 => 128
ll nearstPower2(ll n)
{
    ll temp = n;
    ll high = 1;
    while (temp)
    {
        high <<= 1;
        temp >>= 1;
    }

    ll low = high >> 1;

    return (n - low < high - n) ? low : high;
}

// Flip LSB
// Flip MSB

int main()
{
    // ll n, pos;
    // cin >> n >> pos;
    // cout << "N = " << n << endl;

    // int newN = setBit(n, pos);
    // cout << "newN = " << newN << endl;

    // int newN2 = unsetBit(n, pos);
    // cout << "newN2 = " << newN2 << endl;

    // int bit = getBit(n, pos);
    // cout << bit << endl;

    // int bits = countSetBits(n);
    // cout << bits << endl;

    // if (isPower2(n))
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;

    // ll ans = nearstPower2(n);
    // cout << ans << endl;

    return 0;
}
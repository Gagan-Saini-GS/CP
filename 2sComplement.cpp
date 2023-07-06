#include <iostream>
using namespace std;

int calculateTwosComplement(int number)
{
    // Find the number of bits required to represent the number
    int numBits = sizeof(number) * 8;

    // Calculate the one's complement
    int onesComplement = ~number;

    // Add 1 to the one's complement to get the two's complement
    int twosComplement = onesComplement + 1;

    // Apply a mask to discard any extra bits
    twosComplement &= ((1 << numBits) - 1);

    return twosComplement;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int twosComplement = calculateTwosComplement(number);
    cout << "Two's complement: " << twosComplement << endl;

    return 0;
}

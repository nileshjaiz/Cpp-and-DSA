// Decimal to Binary

#include <iostream>
using namespace std;

int decNum(int n)
{
    int ans = 0;
    int pow = 1;

    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main()
{
    int n = 50;
    cout << decNum(50) << endl;
    return 0;
}
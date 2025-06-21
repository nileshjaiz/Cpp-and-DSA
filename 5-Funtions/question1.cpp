// SUm of Number.

#include <iostream>
using namespace std;

int sumOfNo(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    cout << sumOfNo(5) << endl;
    return 0;
}